#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*
void gotoXY(int x, int y) {
printf("\033[%d;%dH", y, x);
}

void setTextColor(int color) {
printf("\033[%dm", color); // 31=����, 32=�ʷ�, 33=���, 37=��� ��
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
        printf("���� ����: %c", target[i]);

        int input_given = 0;
        char user_input = 0;
        DWORD start_time = GetTickCount(); // �ð� ���� �ٷ� ����

        while (GetTickCount() - start_time < 5000) {  // 5�� ���
            if (_kbhit()) { // _kbhit() �Է��� ������ if�� ����
                user_input = _getch();
                input_given = 1;
                break; // while ��ü�� ������.
            }
        }

        gotoXY(0, 2);
        printf("%c", input_given ? user_input : ' ');

        gotoXY(0, 3);
        if (input_given && user_input == target[i]) {
            setTextColor(32); // �ʷ�
            printf("�Ϻ�!!!");
            correct++;
        }
        else {
            setTextColor(31); // ����
            printf("����!!!");
            wrong++;
        }
        resetTextColor();

        Sleep(100);  // ���� ���ڱ��� 1�� ����
    }

    // ��� ���
    gotoXY(0, 5);
    setTextColor(33); // ���
    printf("=== ��� ===\n");
    printf("���� ��: %d\n", correct);
    printf("���� ��: %d\n", wrong);
    resetTextColor();

    return 0;
}
