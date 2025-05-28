//1, 2번 풀기
// 100ms 마다 빵 1개 생성됨을 출력. 100ms 이후 빵이 2개
#include <stdio.h>
#include <windows.h>
#include <time.h>

int Bread1()
{
	int time = 10;
	int bread = 1;
	
	while (time)
	{
		printf("빵이 %d 생성됨\n", bread);
		Sleep(100);
		bread = bread + 1;
		time = time - 1;
	}
}

int Bread2()
{
	int time = 10;
	int bread = 1;
	int abc = 97; // 아스키코드를 반복해서 나오게 하기 위해 정의 97이 소문자 a.
	clock_t start, end;
	double cpu_time_used;

	/* gpt 답변 : for (int i = 97; i <= 102; i++) {
	printf("%c\n", i);  // 결과는 a, b, c, d, e, f}*/

	start = clock();
	while (time)
	{
		printf("빵이 %c 생성됨\n", abc); // abc 출력
		Sleep(100);
		abc = abc + 1;
		time = time - 1;
	}

	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

	printf("\n작업에 걸린 시간: %.3f초\n", cpu_time_used);
}

int main()
{
	Bread1();
	Bread2();
	return 0;
}