#include "Header.h"
#define A 10.0
#define B 5.0

int main()
{
	system("chcp 1251>nul");


	printf("����� %.2f, %.2f.\n�������� �������� � �������:\n", A, B);
	printf("1.�������.\n2.�������.\n3.��������.\n4.��������\n");
	int chose;
	scanf_s("%d", &chose);
	MakeAMove(chose);

	char* first = FIRST;
	char* second = SECOND;
	char* third = FIRST SECOND;
	printf("\n�����: %s\n", third);

	printf("������� �����, ������� ���������� ������������� � ������\n");
	int number = 0;
	scanf_s("%d", &number);/*
	printf("\n��� ����� �����: %s",IntToString(number));*/

	printf("\n������� ������, ������� ���������� ������������� � �����\n");
	char* str = "";
	scanf_s("%s", &str);
	printf("%d", str);
	system("pause");
}
float Plus(float a, float b)
{
	return a + b;
}
float Minus(float a, float b)
{
	return a - b;
}
float Devide(float a, float b)
{
	return a / b;
}
float MakeAMove(int n)
{
	switch (n)
	{
	case 1:
		f = Plus;
		Print(f(A, B));
		break;
	case 2:
		f = Minus;
		Print(f(A, B));
		break;
	case 3:
		f = Devide;
		Print(f(A, B));
		break;
	case 4:
		f = Multiply;
		Print(f(A, B));
		break;
	}
}
