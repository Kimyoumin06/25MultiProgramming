#include <stdio.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	int a = 1;
	int fps = 0;
	int y = 0;

	clock_t start, end;
	double cpu_time_used;

	start = clock();

	while (a == 1)
	{
		while (fps < 600)
		{
			gotoxy(0, y);
			fps = fps + 1;
			Sleep(10);
			printf("%d 프레임.. %d번", fps, y+1);

			if (fps % 60 == 0)
			{
				y = y + 1;
			}

		}

		a = a - 1;

	}

	end = clock();

	cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
	printf("%.3f 초 동안 실행 됨\n", cpu_time_used);

	return 0;
}