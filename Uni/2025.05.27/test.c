// 모의시험

#include <stdio.h>
#include <windows.h>
#include <conio.h>


//sleep 쓰면서 화면 1,1에 

// \0331y[x - 이스케이프 코드로 1,1

void gotoxy(int x, int y)
{

	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	int time = 1;
	int star = 4;
	int x = 1;
	int y = 1;
	while (time)
	{
		while (star)
		{
			gotoxy(x, y);
			printf("*");
			Sleep(100);
			star = star - 1;
			x = x + 1;
			
		}
		star = 4;
		while (star)
		{
			gotoxy(x, y);
			printf("*");
			Sleep(100);
			star = star - 1;
			y = y + 1;
			
		}
		star = 4;
		while (star)
		{
			gotoxy(x, y);
			printf("*");
			x = x - 1;
			star = star - 1;
			Sleep(100);
			
		}
		star = 4;
		while (star)
		{
			gotoxy(x, y);
			printf("*");
			star = star - 1;
			y = y - 1;
			Sleep(100);
		}
		gotoxy(10, 10);
		time = time - 1;
	}
	
	return 0;
}