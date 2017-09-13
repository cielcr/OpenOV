//#main.cpp

//
#inclnde <opencv2/opencv.hpp>

int main(){

//创建一个视频捕获对象
//从文件读取视频流和从摄像头读取摄像头的差异，它屏蔽了从文件读取视频流和从摄像头读取摄像头的差异，当构造函数参数为设备编号时（第几个摄像头，通常只有一个摄像头时为0），会从摄像头处读取视频流。
	cv::VideoCapture video("video.ogv");//读取文件
	//cv::VideoCapture video(0);
	//使用摄像头
	//捕获画面的容器，OpenCV中的Mat对象
	//OpenCV中最关键的Mat类，Mat是Matrix（矩阵）的缩写，OpenCV中延续了像素图的概念，用矩阵来描述由像素构成的图像
	cv::Mat frame;//
	while(ture){
	//将video中的内容写入到frame中，这里>>运算符是经过OpenCV重载的
	video >> frame;
	//当没有zhen可继续读取时，退出循环
	if(frame.empty())  break;

	//显示当前真
	cv::imshow("test",frame);
	//录制视频鎮频为15，等待1000/15保证视频播放流畅。
	//waitKey(int delay)是OpenCV提供的一个等待函数，当运行到这个函数时会阻塞delay 毫秒的时间来等待键盘输入
	
	int key = cv::waitKey(1000/15);

	//当按键为ESC时，退出循环
	if(key == 27) break;

	}

	//释放申请的相关内存
	cv:destroyAllWindows();
	video.release();
	return 0;

}

