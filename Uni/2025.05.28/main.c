//1, 2�� Ǯ��
// 100ms ���� �� 1�� �������� ���. 100ms ���� ���� 2��
#include <stdio.h>
#include <windows.h>
#include <time.h>

int Bread1()
{
	int time = 10;
	int bread = 1;
	
	while (time)
	{
		printf("���� %d ������\n", bread);
		Sleep(100);
		bread = bread + 1;
		time = time - 1;
	}
}

int Bread2()
{
	int time = 10;
	int bread = 1;
	int abc = 97; // �ƽ�Ű�ڵ带 �ݺ��ؼ� ������ �ϱ� ���� ���� 97�� �ҹ��� a.
	clock_t start, end;
	double cpu_time_used;

	/* gpt �亯 : for (int i = 97; i <= 102; i++) {
	printf("%c\n", i);  // ����� a, b, c, d, e, f}*/

	start = clock();
	while (time)
	{
		printf("���� %c ������\n", abc); // abc ���
		Sleep(100);
		abc = abc + 1;
		time = time - 1;
	}

	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

	printf("\n�۾��� �ɸ� �ð�: %.3f��\n", cpu_time_used);
}

int main()
{
	Bread1();
	Bread2();
	return 0;
}