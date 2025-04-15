#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

int main()
{

	gotoxy(1,1);
	puts("\t\t \033[37m(\033[47m\t\033[0m)");
	
	return 0;
}