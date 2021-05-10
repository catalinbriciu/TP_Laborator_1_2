#include<stdlib.h>
#include<stdio.h>

int SumaCifre(int n)
{
	if (n == 1)
		return 1;
	else
		return SumaCifre(n/10)+n%10;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", SumaCifre(n));
	system("cls");
}