#include "Header.h"
#define A 10.0
#define B 5.0
#define AMP(C) C * C
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

	/*printf("������� �����, ������� ���������� ������������� � ������\n");
	int number = 0;
	scanf_s("%d", &number);
	char* tmp = IntToString(number);
	for (size_t i = 0; i < 5; i++)
	{
		printf("\n��� ����� �����: %s", tmp[i]);
	}

	printf("\n������� ������, ������� ���������� ������������� � �����\n");
	char* str = "";
	scanf_s("%s", &str);
	printf("%d", str);*/
	float x1 = 0, x2 = 1, y1 = 0, y2 = 1;
	printf("����� ������� �� ����������� {%.2f;%.2f},{%.2f;%.2f} = %.2f\n", x1, y1, x2, y2, SegmentLength(x1, x2, y1, y2));

	system("pause");
}
float SegmentLength(float x1, float x2, float y1, float y2)
{
	return sqrt(AMP(x2 - x1) + AMP(y2 - y1));
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
