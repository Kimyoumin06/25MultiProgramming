#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

int main()
{
	gotoxy(10,1);
	printf("\033[40m\033[33mO\t\t\033[40m\033[33mO\033[0m");

	gotoxy(10, 2);
	printf("\033[40m\033[34m|\033[0m\t\t\033[40m\033[32m|\033[0m");

	gotoxy(8, 3);
	printf("--------------------");

	gotoxy(8,4);
	printf("|\033[45mVVVVVVVVVVVVVVVVVV\033[0m|");

	gotoxy(8, 5);
	printf("|\033[47m__________________\033[0m|");

	gotoxy(8, 6);
	printf("--------------------");

	gotoxy(6, 8);
	printf("------------------------");

	gotoxy(6, 9);
	printf("|\033[45mVVVVVVVVVVVVVVVVVVVVVV\033[0m|");

	gotoxy(6, 10);
	printf("|\033[47m______________________\033[0m|");

	gotoxy(6, 11);
	printf("------------------------");

	return 0;
}