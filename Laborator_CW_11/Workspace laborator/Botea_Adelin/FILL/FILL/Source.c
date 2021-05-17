#include <stdio.h>
#include <stdlib.h>
void FILL(int i, int j) 
{ // FILL/umplere recursiva
	int a[100][100];
	if (!a[i][j]) 
	{
		a[i][j] = 1; //umple
		FILL(i - 1, j); //sus
		FILL(i, j + 1); //dreapta
		FILL(i + 1, j); //jos
		FILL(i, j - 1); //stanga
	}
}
int main()
{
	int n, a[100][100], i, j, x1, x2, m;
	printf("Introduceti numarul de linii/coloane ale matricei:");
	scanf("%d", &n);
	scanf("%d", &m);
	printf("Introduceti coordonatele punctului P:");
	scanf("%d", &x1);
	scanf("%d", &x2);
	for(i=0;i<n;i++)
		for (j = 0; j < m; j++)
		{
		    printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	FILL(x1, x2);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d  ", a[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}