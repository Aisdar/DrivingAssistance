#ifndef BAG_H
#define BAG_H

#define TYPE_REGISTER_BAG 1             //注册包类型
#define TYPE_REGISTER_RES_BAG  2        //注册响应包类型
#define TYPE_LOGIN_BAG 3                //登录包类型
#define TYPE_LOGIN_RES_BAG 4            //登录响应包类型
#define TYPE_PICTURE_UP_BAG 5           //图片上传分包类型
#define TYPE_PICTURE_UP_RES_BAG 6       //图片上传分包响应包类型
#define TYPE_VIDEO_RECORD_BAG 7         //播放记录请求包类型
#define TYPE_VIDEO_RECORD_MIX_BAG 8     //视频上传包
#define TYPE_HEART 9                    //心跳包类型
#define TYPE_VIDEO_RECORD_RES_BAG 10    //播放记录上传响应包
#define TYPE_VIDEO_RECORD_UPDATE_BAG 11 //播放记录更新类型
#define TYPE_VIDEO_LIST_BAG 12          //播放记录详情响应包类型
#define TYPE_PICTURE_DOWN_BAG 13        //图片下载分包类型
#define TYPE_PICTURE_DOWN_RES_BAG 14    //图片下载分包响应包类型
#define TYPE_PICTURE_PATH_BAG 15        //图片路径请求包类型
#define TYPE_PICTURE_LIST_BAG 16        //图片路径请求响应包类型

#include <QString>

//包头 定长
typedef struct bag_head_t
{
    int type;                       //类型 功能id
    int fd;
    char request_time[50];          //客户端发起请求的时间
    int data_size;                  //数据大小（包体）
    unsigned char CRC_check_code;   //校验码
}BAG_HEAD_T;

//包体不定长
//注册请求包
typedef struct bag_register_t
{
    char name[20];  //昵称
    char num[10];   //用户账号
    char pwd[33];   //密码
}BAG_REGISTER_T;

//注册响应包
typedef struct bag_register_res_t
{
    int res;            //结果
    char error_msg[64]; //错误信息
}BAG_REGISTER_RES_T;

//登录请求包
typedef struct bag_login_t
{
    char user_ID[6];    //账号
    char pwd[33];       //密码
}BAG_LOGIN_T;

//登录响应包
typedef struct bag_login_res_t
{
    int res;                //结果
    char error_msg[128];    //错误信息
}BAG_LOGIN_RES_T;

//特征图片上传请求包
typedef struct bag_picture_up_t
{
    char user_ID[6];        //账号
    char picture_name[32];  //图片名
    char picture_path[64];  //图片地址
    int bag_sum;            //总包数
    int bag_index;          //第几个包
    int last_file_size;     //最后一块包大小
    char pic_buf[1024];     //图片数据

}BAG_PICTURE_UP_T;

//特征图片上传应答包
typedef struct bag_picture_up_res_t
{
    int res;                //结果  0 -- 重发 1 -- 不重发
    char error_msg[128];    //错误信息
}BAG_PICTURE_UP_RES_T;

//特征图片信息结构体
typedef struct bag_picture_t
{ 
    char picture_name[32];  //图片名
    char picture_path[64];  //图片地址
}BAG_PICTURE_T;

//特征图片路径请求包
typedef struct bag_picture_path_t
{
    char user_ID[6];    //账号
    int page;           //请求页数
}BAG_PICTURE_PATH_T;

//特征图片路径信息应答包
typedef struct bag_picture_list_t
{
    int picture_num;            //图片个数
    int page_num;               //返回包当前页有多少个
    BAG_PICTURE_T list[9];      //返回的图片数据
}BAG_PICTURE_LIST_T;

//特征图片下载请求包
typedef struct bag_picture_down_t
{
    char user_ID[6];            //账号
    char picture_name[32];      //图片名
}BAG_PICTURE_DOWN_T;

//特征图片下载应答包
typedef struct bag_picture_down_res_t
{
    int res;                    //结果  0 -- 重发 1 -- 不重发
    int bag_sum;                //总包数
    int bag_index;              //第几个包
    int last_file_size;         //最后一块包大小
    char pic_buf[1024];         //图片数据

}BAG_PICTURE_DOWN_RES_T;


//视频请求包
typedef struct bag_video_record_t
{
    char user_ID[6];            //账号
    int page;                   //当前页数
}BAG_VIDEO_RECPRD_T;

//视频列表数据响应包
typedef struct bag_video_list_t
{
    int video_num;                  //视频个数
    int page_num;                   //返回包当前页有多少个
//    BAG_VIDEO_RECORD_MIX_Tlist[9];//存数据
}BAG_VIDEO_LIST_T;

//视频记录结构体
typedef struct bag_video_record_mix_t
{
    char video_name[32];            //视频名称
    char user_ID[6];                //账号
    char video_path[64];            //视频路径
    char video_first_image[32];     //第一帧图片名称
    int video_cur_frame;            //当前播放帧
    int video_count_frame;           //视频总帧数
    //char capture_name[50];         //视频拍摄的摄像头名称，预留
}BAG_VIDEO_RECORD_MIX_T;


//视频记录响应包
typedef struct bag_video_record_res_t
{
    int res;                    //结果
    char error_msg[128];        //错误信息
}BAG_VIDEO_RECORD_RES_T;

//判断客户端是否登录
typedef struct fd_login_heart_t
{
    int count;                  //心跳
    int login_index;            // 1为登录 0为未登录
}FD_LOGIN_HEART_T;

#endif // BAG_H


