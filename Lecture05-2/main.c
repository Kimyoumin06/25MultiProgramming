#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y)
{

    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {

    int i = 1;

    gotoxy(10, 0);
    printf("\033[37m-----==----");

    gotoxy(14, i);

    printf("==\n");
    
    gotoxy(31, i);

    printf("<");

    gotoxy(10, i+1); 

    printf("\033[41m-----=------\033[0m        <<\n");

    gotoxy(9, i+2);

    printf("\033[41m= | | | ============\033[0m<<<\n");

    gotoxy(10, i + 3);

    printf("\033[41m------------\033[0m\n");

    return 0;

}