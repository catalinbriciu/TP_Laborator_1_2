#include<stdlib.h>
#include<stdio.h>

int suma(int n)
{
	if (n == 1)
		return 1;
	else
		return n + suma(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d",suma(n));
	system("cls");
}