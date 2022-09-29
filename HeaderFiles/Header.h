#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#define FIRST  "first "
#define SECOND "second"

float answer;
float SegmentLength(float x1, float x2, float y1, float y2);
float Plus(float, float);
float Minus(float, float);
float Devide(float, float);
float(*f)(float, float);
void Print(float sum) 
{
	printf("\nОтвет: %.2f\n\n", sum);
}
float Multiply(float a, float b)
{
	return a * b;
}
char* IntToString(int n) 
{
	char str[6];
	return sprintf(str, "%d", n);
}


