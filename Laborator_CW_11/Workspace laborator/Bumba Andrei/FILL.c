#include<stdio.h>
#include<stdlib.h>
int a[100][100], n;
void FILL(int i, int j)
{
	if (!a[i][j])
	{
		a[i][j] = 1;
		FILL(i - 1, j);
		FILL(i, j + 1);
		FILL(i + 1, j);
		FILL(i, j - 1);
	}
}
int main()
{
	int i, j, iP, jP;
	printf("n= ");
	scanf("%d", &n);
	n++;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
				a[i][j] = 1;
			else
			{
				printf("a[%d][%d]= ", i, j);
				scanf("%d", &a[i][j]);
			}
	printf("\nCordoonatele lui P:\ni= ");
	scanf("%d", &iP);
	printf("j= ");
	scanf("%d", &jP);
	printf("\n");
	FILL(iP, jP);
	for (i = 1; i < n - 1; i++)
	{
		for (j = 1; j < n - 1; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}