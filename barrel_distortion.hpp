#ifndef BARREL_DISTORTION_HPP
#define BARREL_DISTORTION_HPP

#include "opencv2/opencv.hpp"

class barrelDistortion {

	using namespace cv;
public:
	barrelDistortion(Mat& src, Mat& dst,
		float K,
		float centerX, float centerY,
		int width, int height);

	void barrel_distort();
private:
	Mat src;
	Mat dst;
	float K;
	float centerX;
	float centerY;
	int width;
	int height;

	float thresh = 1;
	float xscale;
	float yxcale;
	float xshift;
	float yshift;

	float calc_shift(float x1, float x2, float cx, float k);
	float getRadialX(float x, float y, float cx, float cy, float k);
	float getRadialY(float x, float, y, float cx, float cy, float k);
	void sampleImage(Mat& src, float idx0, float idx1, Scalar& result);
};

#endif
