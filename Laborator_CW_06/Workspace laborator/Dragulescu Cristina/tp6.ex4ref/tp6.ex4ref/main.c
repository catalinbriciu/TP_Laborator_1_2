#include<stdio.h>
#include<stdlib.h>


void Swap1(int p, int q)
{
	int k;
	k = p;
	p = q;
	q = k;
}

void Swap3(int *p, int *q)
{
	int k;
	k = *p;
	*p = *q;
	*q = k;
}

int main()
{
	int a = 2; int b = 5;
	Swap1(a,b);
	printf("Swap1->%d %d\n", a, b);
	Swap3(&a, &b);
	printf("Swap3->%d %d\n", a, b);
	return 0;
}