#include<stdio.h>
#include<stdlib.h>

void FILL(int i, int j) 
{ 
	int n,a[20][20];
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
	int a[20][20], n, i, j, Px, Py;
	printf("Introduceti n= ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
				a[i][j] = 1;
			else
			{
				printf("a[%d][%d]= ", i, j);
				scanf("%d", &a[i][j]);
			}

	printf("\nCordoonatele punctului P(x,y) sunt :\n");
	scanf("%d %d", &Px, &Py);
	fill(Px, Py);
	for (i = 1; i < n - 1; i++)
	{
		for (j = 1; j < n - 1; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	system("cls");
	return 0;
}