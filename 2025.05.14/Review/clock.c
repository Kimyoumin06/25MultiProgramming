#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h> // clock_t 쓸 수 있음


// double - ex)3.141592
// clock_t - 시간 층적을 위한 타입. 정수형 기반이며 <time.h>

int main()
{
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int i=1;
	while (i<=60)
	{
		printf("%d프레임 경과...\n", i);
		i = i + 1;
		if (i == 60)
		{
			Sleep(1000);
			i = 1;
		}
	}

	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

	printf("작업에 걸린 시간 : %.3f초\n", cpu_time_used);

	return 0;
}