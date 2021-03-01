#include<stdio.h>
#include<stdlib.h>
int CautareBinara(unsigned int A[1000], int n, int x)
{
	int li, ls, k;
	li = 1;
	ls = n;
	while (li < ls)
	{
		k = (li + ls) / 2;
		if (x == A[k])
			return x;
		else
			if (x < A[k])
				ls = k - 1;
			else
				li = k + 1;
	}
	return 0;
}
int main()
{
	unsigned int A[1000];
	int i, x, n;
	printf("n=");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("A[%d]=", i);
		scanf("%d", &A[i]);
	}
	printf("\nx=");
	scanf("%d", &x);
	printf("%d\n", CautareBinara(A, n, x));
	system("pause");
	return 0;
}