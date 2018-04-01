#pragma once
#include "CImg.h"
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
using namespace cimg_library;

// 1.读取1.bmp并显示
void demo1();

// 2. 把 1.bmp 文件的白色区域变成红色，黑色区域变成绿色
void demo2();

// 3. 在图上绘制一个圆形区域，圆心坐标(50,50)，半径为 30，填充颜色为蓝色
void demo3();

// 4. 在图上绘制一个圆形区域，圆心坐标(50,50)，半径为 3，填充颜色为黄色
void demo4();

