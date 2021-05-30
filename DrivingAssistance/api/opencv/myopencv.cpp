#include "myopencv.h"
#include <QImage>

MyOpenCV::MyOpenCV()
{

}

VideoCapture MyOpenCV::OpenVideo(int videoIndex)
{

}

VideoCapture MyOpenCV::OpenVideo(QString videoPath)
{

}


QImage MyOpenCV::cvMat2QImage(const Mat &inMat)
{
    switch ( inMat.type() )
            {
            // 8-bit, 4 channel
            case CV_8UC4:
            {
                QImage image( inMat.data,
                              inMat.cols, inMat.rows,
                              static_cast<int>(inMat.step),
                              QImage::Format_ARGB32 );

                return image;
            }

            // 8-bit, 3 channel
            case CV_8UC3:
            {
                QImage image( inMat.data,
                              inMat.cols, inMat.rows,
                              static_cast<int>(inMat.step),
                              QImage::Format_RGB888 );

                return image.rgbSwapped();
            }

            // 8-bit, 1 channel
            case CV_8UC1:
            {
        #if QT_VERSION >= QT_VERSION_CHECK(5, 5, 0)
                QImage image( inMat.data,
                              inMat.cols, inMat.rows,
                              static_cast<int>(inMat.step),
                              QImage::Format_Grayscale8 );//Format_Alpha8 and Format_Grayscale8 were added in Qt 5.5
        #else//这里还有一种写法，最后给出
                static QVector<QRgb>  sColorTable;

                // only create our color table the first time
                if ( sColorTable.isEmpty() )
                {
                    sColorTable.resize( 256 );

                    for ( int i = 0; i < 256; ++i )
                    {
                        sColorTable[i] = qRgb( i, i, i );
                    }
                }

                QImage image( inMat.data,
                              inMat.cols, inMat.rows,
                              static_cast<int>(inMat.step),
                              QImage::Format_Indexed8 );

                image.setColorTable( sColorTable );
        #endif

                return image;
            }

            default:
                qWarning() << "CVS::cvMatToQImage() - cv::Mat image type not handled in switch:" << inMat.type();
                break;
            }

    return QImage();
}

Mat MyOpenCV::QImage2cvMat(const QImage &inImage, bool inCloneImageData)
{
    switch ( inImage.format() )
        {
        // 8-bit, 4 channel
        case QImage::Format_ARGB32:
        case QImage::Format_ARGB32_Premultiplied:
        {
            cv::Mat  mat( inImage.height(), inImage.width(),
                          CV_8UC4,
                          const_cast<uchar*>(inImage.bits()),
                          static_cast<size_t>(inImage.bytesPerLine())
                          );

            return (inCloneImageData ? mat.clone() : mat);
        }

        // 8-bit, 3 channel
        case QImage::Format_RGB32:
        case QImage::Format_RGB888:
        {
            if ( !inCloneImageData )
            {
                qWarning() << "CVS::QImageToCvMat() - Conversion requires cloning because we use a temporary QImage";
            }

            QImage   swapped = inImage;

            if ( inImage.format() == QImage::Format_RGB32 )
            {
                swapped = swapped.convertToFormat( QImage::Format_RGB888 );
            }

            swapped = swapped.rgbSwapped();

            return cv::Mat( swapped.height(), swapped.width(),
                            CV_8UC3,
                            const_cast<uchar*>(swapped.bits()),
                            static_cast<size_t>(swapped.bytesPerLine())
                            ).clone();
        }

        // 8-bit, 1 channel
        case QImage::Format_Indexed8:
        {
            cv::Mat  mat( inImage.height(), inImage.width(),
                          CV_8UC1,
                          const_cast<uchar*>(inImage.bits()),
                          static_cast<size_t>(inImage.bytesPerLine())
                          );

            return (inCloneImageData ? mat.clone() : mat);
        }

        default:
            qWarning() << "CVS::QImageToCvMat() - QImage format not handled in switch:" << inImage.format();
            break;
        }

    return cv::Mat();
}

Mat MyOpenCV::DetecCarDraw(Mat &frame, CascadeClassifier cascade, double scale)
{
    // 灰度处理
    Mat gray;
    cvtColor(frame, gray, CV_BGR2GRAY);
    // 将原始图片按scale缩放
    Mat smallimg(cvRound(frame.rows/scale), cvRound(frame.cols/scale), CV_8UC1);
    resize(gray, smallimg, smallimg.size(), 0, 0, INTER_LINEAR);

    // 直方图均值化；让缩小以后的灰度图实现黑白分明
    equalizeHist(smallimg, smallimg);

    // 以上处理作为图片准工作，OpenCV识别物体
    /** @Class CascadeClassifier detectMultiScale
      * 1|需要处理的原始图片
      * 2|最终保存下来的车辆位置数据Rect
      * 3|扫描两侧物体窗口扩大系数 默认1.1
      * 4|相邻矩阵最小个数
      * 5|物体最小像素范围
    */
    vector<Rect> cars;
    // 使用级联分类器 用车辆的一系列特征对比找到属于车辆的矩形 找到后 放在cars容器里
    cascade.detectMultiScale(smallimg, cars, 1.1, 2, CV_HAAR_SCALE_IMAGE, Size(30, 30));

    // 画方框
    vector<Rect>::const_iterator iter;
    for(iter = cars.begin(); iter != cars.end(); iter++){
        // 注意x，y等比例放大
        rectangle(frame,
                  CvPoint(cvRound(iter->x*scale), cvRound(iter->y*scale)),
                  CvPoint(cvRound((iter->x+iter->width-1)*scale), cvRound((iter->y+iter->height-1)*scale)),
                  Scalar(0, 255, 0),
                  2,
                  8);
    }
    return frame;
}
