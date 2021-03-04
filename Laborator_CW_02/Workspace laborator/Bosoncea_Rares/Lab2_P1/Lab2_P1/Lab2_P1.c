#include<stdio.h>
#include<stdlib.h>
int CautareLiniara(unsigned int A[1000], int n, int x)
{
	int i = 1;
	while (i <= n)
	{
		if (A[i] == x)
			break;
		i++;
	}
	if (i == n + 1)
		return 0;
	else
		return i;
}
int main()
{
	unsigned int A[1000];
	int i, x, n;
	printf("n=");
	scanf("%d", &n);
	printf("\nx=");
	scanf("%d", &x);
	for (i = 1; i <= n; i++)
	{
		printf("A[%d]=", i);
		scanf("%d", &A[i]);
	}
	printf("%d\n", CautareLiniara(A, n, x));
	system("pause");
	return 0;
}