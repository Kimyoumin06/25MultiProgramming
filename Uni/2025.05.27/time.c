#include <stdio.h>
#include <time.h>

/*
    [C ��� �⺻ �ڷ��� ����]

    - int       : ������. ���� 4����Ʈ. ��: 1, -3, 42
    - long      : �� ū ������ ����. ���� 4~8����Ʈ. ��: 1000000000L
    - float     : ������ �Ǽ��� (�Ҽ���). ���� 4����Ʈ. ��: 3.14f
    - double    : ������ �Ǽ���. ���� 8����Ʈ. ��: 3.141592
    - char      : ������. 1����Ʈ. ��: 'a', 'Z'
    - void      : ��ȯ ���� ������ ��Ÿ��. ��: void �Լ�()
    - clock_t   : �ð� ������ ���� Ÿ��. ������ ����̸� <time.h>���� ���ǵ�
*/

int moveCursor(int x, int y)
{
    printf("\033[%d;%dH", y + 1, x + 1);
}

int main() {
    clock_t start, end;       // ���۰� �� �ð� ����� ����
    double cpu_time_used;     // ��� �ð� (��) ����� ����

    start = clock();          // ���� CPU �ð��� ���� �ð����� ����

    int i = 0;
    // ���� �۾�: �ð��� ���� �ɸ��� ���� (�ð� ������ ���� ���� �۾�)
    while (i < 100000)
    {
        moveCursor(0, 0);
        printf("�������R %d\n", i);
        i = i + 1;
    }

    end = clock();            // ���� CPU �ð��� �� �ð����� ����

    // ��� �ð� ��� (ƽ �� ���� / �ʴ� ƽ ��)
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\n�۾��� �ɸ� �ð�: %.3f��\n", cpu_time_used);  // ��� ���

    return 0;
}