#include "ex1.h"

// 1.读取1.bmp并显示
void demo1() {
	CImg<unsigned char> img("1.bmp");
	//显示
	img.display("origin image");
	img.save("output1.bmp");
}

// 2. 把 1.bmp 文件的白色区域变成红色，黑色区域变成绿色
void demo2() {
	CImg<unsigned char> img("1.bmp");
	cimg_forXY(img, x, y) {
		// 黑色
		if (img(x, y, 0) < 10 && img(x, y, 1) < 10 && img(x, y, 2) < 10) {
			img(x, y, 0) = 0;
			img(x, y, 1) = 255;
			img(x, y, 2) = 0;
		}
		// 白色
		else if (img(x, y, 0) >= 110 && img(x, y, 1) >= 110 && img(x, y, 2) >= 110) {
			img(x, y, 0) = 255;
			img(x, y, 1) = 0;
			img(x, y, 2) = 0;
		}
	}
	img.display("demo2");
	img.save("output2.bmp");
}

// 3. 在图上绘制一个圆形区域，圆心坐标(50,50)，半径为 30，填充颜色为蓝色
void demo3() {
	CImg<unsigned char> img(100, 100, 1, 3);
	img.fill(0);
	cimg_forXY(img, x, y) {
		double distance = sqrt((x - 50)*(x - 50) + (y - 50)*(y - 50));
		if (distance <= 30.000001) { 
			// 半径为30，即到圆心距离不超过30
			img(x, y, 0) = 0;
			img(x, y, 1) = 0;
			img(x, y, 2) = 255;
			//蓝色
		}
	}
	img.display("demo3");
	img.save("output3.bmp");
}

// 4. 在图上绘制一个圆形区域，圆心坐标(50,50)，半径为 3，填充颜色为黄色
void demo4() {
	CImg<unsigned char> img(100, 100, 1, 3);
	img.fill(0);
	cimg_forXY(img, x, y) {
		double distance = sqrt((x - 50)*(x - 50) + (y - 50)*(y - 50));
		if (distance <= 3.000001) { 
			// 半径为3
			// 黄色
			img(x, y, 0) = 255;
			img(x, y, 1) = 255;
			img(x, y, 2) = 0;
		}
	}
	img.display("demo4");
	img.save("output4.bmp");
}