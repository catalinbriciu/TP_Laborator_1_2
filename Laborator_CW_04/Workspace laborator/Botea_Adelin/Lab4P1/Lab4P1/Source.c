#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 64;
	printf("%o", a | a >> 2);
	system("pause");
	return 0;
}