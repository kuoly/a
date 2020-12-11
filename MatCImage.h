#pragma once
#include <opencv2/opencv.hpp>;
#include<atlimage.h>
using namespace cv;
class MatCImage
{
public:
	/*MatToCImage
	*��飺
	*	OpenCV��MatתATL/MFC��CImage����֧�ֵ�ͨ���ҶȻ���ͨ����ɫ
	*������
	*	mat��OpenCV��Mat
	*	cimage��ATL/MFC��CImage
	*/
	void MatToCImage(Mat& mat, CImage& cimage);


	/*CImageToMat
	*��飺
	*	ATL/MFC��CImageתOpenCV��Mat����֧�ֵ�ͨ���ҶȻ���ͨ����ɫ
	*������
	*	cimage��ATL/MFC��CImage
	*	mat��OpenCV��Mat
	*/
	void CImageToMat(CImage& cimage, Mat& mat);
};
