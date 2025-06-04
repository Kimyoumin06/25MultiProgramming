#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*
void gotoXY(int x, int y) {
printf("\033[%d;%dH", y, x);
}

void setTextColor(int color) {
printf("\033[%dm", color); // 31=빨강, 32=초록, 33=노랑, 37=흰색 등
}

void resetTextColor() {
printf("\033[0m");
}

void startUnderline() {
printf("\033[4m");
}

void endUnderline() {
printf("\033[24m");
}
*/

void gotoXY(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
void setTextColor(int color) {
    printf("\033[%dm", color);
}
void resetTextColor() {
    printf("\033[0m");
}

int main() {
    char target[5] = { 'A', 'B', 'C', 'D', 'E' };
    int correct = 0, wrong = 0;

    for (int i = 0; i < 5; i++) {
        system("cls");
        gotoXY(0, 1);
        printf("문자 등장: %c", target[i]);

        int input_given = 0;
        char user_input = 0;
        DWORD start_time = GetTickCount(); // 시간 측정 바로 시작

        while (GetTickCount() - start_time < 5000) {  // 5초 대기
            if (_kbhit()) { // _kbhit() 입력을 받으면 if문 실행
                user_input = _getch();
                input_given = 1;
                break; // while 자체를 꺼버림.
            }
        }

        gotoXY(0, 2);
        printf("%c", input_given ? user_input : ' ');

        gotoXY(0, 3);
        if (input_given && user_input == target[i]) {
            setTextColor(32); // 초록
            printf("완벽!!!");
            correct++;
        }
        else {
            setTextColor(31); // 빨강
            printf("에러!!!");
            wrong++;
        }
        resetTextColor();

        Sleep(100);  // 다음 문자까지 1초 쉬기
    }

    // 결과 출력
    gotoXY(0, 5);
    setTextColor(33); // 노랑
    printf("=== 결과 ===\n");
    printf("정답 수: %d\n", correct);
    printf("오답 수: %d\n", wrong);
    resetTextColor();

    return 0;
}
