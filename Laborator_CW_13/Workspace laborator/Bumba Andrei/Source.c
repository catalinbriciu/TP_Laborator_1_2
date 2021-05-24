#include<stdio.h>
#include<stdlib.h>
int a[20] = { 2, 3, 8 , 1, 9, 5, 7, 6 }, n = 8;
int DI(int li, int ls)
{
	int x, y;
	if (li < ls)
	{
		x = DI(li, (li + ls) / 2);
		y = DI((li + ls) / 2 + 1, ls);
		if (x < y) return y;
		else return x;
	}
	else
		return a[li];
}
int main()
{
	printf("%d ", DI(0, n - 1));
}