#include<stdio.h>
#include<stdlib.h>

void FILL(int i, int j) {
	if (!a[i][j]) {
		a[i][j] = 1; //umple
		FILL(i - 1, j); //sus
		FILL(i, j + 1); //dreapta
		FILL(i + 1, j); //jos
		FILL(i, j - 1); //stanga
	}
}

int main()
{
	int i, j, n, m;
	printf("Alegeti gimensiunile matricei(Lxl):");
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++){
		    printf("a[%d][%d]=",i,j);
			scanf("%d", a[i][j]);
		}
		
	}
	printf("\n");
	printf("Matricea:\n");
	FILL(i, j);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
