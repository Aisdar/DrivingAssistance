#ifndef MYOPENCV_H
#define MYOPENCV_H

#include "pthread.h"
#include <opencv2/opencv.hpp>
#include <QDebug>
#include <QImage>

using namespace cv;
using namespace std;

class MyOpenCV : QObject
{
    Q_OBJECT
public:
    MyOpenCV();
    static VideoCapture OpenVideo(int videoIndex);
    static VideoCapture OpenVideo(QString videoPath);
    static QImage cvMat2QImage(const Mat& mat);
    static Mat QImage2cvMat(const QImage &inImage, bool inCloneImageData = true);
    static Mat DetecCarDraw(Mat &frame, CascadeClassifier cascade, double scale);
};

#endif // MYOPENCV_H
