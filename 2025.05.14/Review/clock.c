#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h> // clock_t �� �� ����


// double - ex)3.141592
// clock_t - �ð� ������ ���� Ÿ��. ������ ����̸� <time.h>

int main()
{
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int i=1;
	while (i<=60)
	{
		printf("%d������ ���...\n", i);
		i = i + 1;
		if (i == 60)
		{
			Sleep(1000);
			i = 1;
		}
	}

	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

	printf("�۾��� �ɸ� �ð� : %.3f��\n", cpu_time_used);

	return 0;
}