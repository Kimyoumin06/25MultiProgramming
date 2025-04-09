#include <stdio.h>
#include <windows.h>

int print()
{
	printf("Tab \t test");
	printf("Enter test\n");
	printf("Won look \" test \n");
	
	return 0;
}

int main()
{
	print();
	int a = 1;
	char b = 'c';
	
	printf("test1 %d test1", a);
	printf("test2 %c test2", b);
	
	return 0;
}