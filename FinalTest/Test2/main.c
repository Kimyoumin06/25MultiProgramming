#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

void gotoXY(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
void setTextColor(int color) {
    printf("\033[%dm", color);
}
void resetTextColor() {
    printf("\033[0m");
}

int main()
{
    char target[5] = { 'L', 'O', 'V', 'E', '!' };
    int correct = 0, wrong = 0;

    int input_given = 0;
    char user_input = 0;

    gotoXY(0, 1);
    printf("LOVE!\n");

    int count = 0;
    clock_t start, end;       // 시작과 끝 시간 저장용 변수
    double cpu_time_used;     // 경과 시간 (초) 저장용 변수

    start = clock();          // 현재 CPU 시간을 시작 시간으로 저장

    char text[100];
    scanf_s("%s", text, 100);
    
    /*while (1)
    {
        if (_kbhit()) {
            _getch();
            count++;
        }
        Sleep(100);

        char a = _getch();
        gotoXY(0, 3);
        if (c == target[0]) {
            printf("L");
            correct++;
        }
        else if(c != target[0]) {
            setTextColor(31);
            printf("L");
            wrong++;
        }
        resetTextColor();

        char a = _getch();
        gotoXY(1, 3);
        if (c == target[1]) {
            printf("O");
            correct++;
        }
        else if (c != target[1]) {
            setTextColor(31);
            printf("O");
            wrong++;
        }
        resetTextColor();

        char a = _getch();
        gotoXY(2, 3);
        if (c == target[2]) {
            printf("V");
            correct++;
        }
        else if (c != target[2]) {
            setTextColor(31); // 빨강
            printf("V");
            wrong++;
        }
        resetTextColor();

        char a = _getch();
        gotoXY(3, 3);
        if (c == target[2]) {
            printf("E");
            correct++;
        }
        else if (c != target[2]) {
            setTextColor(31); // 빨강
            printf("E");
            wrong++;
        }
        resetTextColor();

        char a = _getch();
        gotoXY(4, 3);
        if (c == target[3]) {
            printf("!");
            correct++;
            break;
        }
        else if (c != target[3]) {
            setTextColor(31); // 빨강
            printf("!");
            wrong++;
            break;
        }
        resetTextColor();
    }
    end = clock();*/
    return 0;
}