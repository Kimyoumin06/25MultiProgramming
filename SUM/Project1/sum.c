#include <stdio.h>
#include <conio.h>

int SUM(int a, int b)
{
	int c = a + b;
	return 0;
}

int SUB(int a, int b)
{
	int c = a - b;
	return 0;
}

int MUL(int a, int b)
{
	int c = a * b;
	return 0;
}

int DIV(int a, int b)
{
	int c = a / b;
	return 0;
}

int main()
{
	int a = 10;
	int b = 20;
	char c = _getch();
	printf("SUM of %d and %d is %d\n", a, b, SUM(a, b));

	return 0;
}