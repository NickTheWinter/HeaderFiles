#pragma once
#include <stdio.h>
#include <string.h>
#define FIRST  "first "
#define SECOND "second"
#define _CRT_SECURE_NO_WARNINGS
float answer;
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
}/*
char* IntToString(int n) 
{
	char str[6];
	return sprintf(str, "%d", n);
}*/


