#include<stdlib.h>
#include<stdio.h>

int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n));
	system("cls");
}