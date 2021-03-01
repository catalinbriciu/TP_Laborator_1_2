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
				lf = k - 1;
			else
		         li = k + 1;
	}
}
int main()
{
	unsigned int A[1000];
	int i,x,n;
	printf("n=");
	scanf("%d", &n);
	printf("\nx=");
	scanf("%d", &x);
	for (i = 1; i <= n; i++)
	{
		printf("A[%d]=",i);
		scanf("%d", &A[i]);
	}
	printf("%d\n", CautareLiniara(A, n, x));
	system("pause");
	return 0;
}