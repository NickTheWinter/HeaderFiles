#include "Header.h"
#define A 10.0
#define B 5.0
#define AMP(C) C * C
int main()
{
	system("chcp 1251>nul");


	printf("Числа %.2f, %.2f.\nВыберите действие с числами:\n", A, B);
	printf("1.Сложить.\n2.Вычесть.\n3.Поделить.\n4.Умножить\n");
	int chose;
	scanf_s("%d", &chose);
	MakeAMove(chose);

	char* first = FIRST;
	char* second = SECOND;
	char* third = FIRST SECOND;
	printf("\nОтвет: %s\n", third);

	/*printf("Введите число, которое необходимо преобразовать в строку\n");
	int number = 0;
	scanf_s("%d", &number);
	char* tmp = IntToString(number);
	for (size_t i = 0; i < 5; i++)
	{
		printf("\nЭто число будет: %s", tmp[i]);
	}

	printf("\nВведите строку, которую необходимо преобразовать в число\n");
	char* str = "";
	scanf_s("%s", &str);
	printf("%d", str);*/
	float x1 = 0, x2 = 1, y1 = 0, y2 = 1;
	printf("Длина отрезка по координатам {%.2f;%.2f},{%.2f;%.2f} = %.2f\n", x1, y1, x2, y2, SegmentLength(x1, x2, y1, y2));

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
