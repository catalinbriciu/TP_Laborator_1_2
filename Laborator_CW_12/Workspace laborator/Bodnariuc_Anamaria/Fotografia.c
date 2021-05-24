
#include<stdio.h>
#include<stdlib.h>


int x[8] = { -1,-1,-1,0,1,1,1,0 };
int y[8] = { -1,0,1,1,1,0,-1,-1 };

int A[100][100] = { {0,0,0,1,1,0,1,0},{1,1,0,0,0,1,0,0},{1,1,0,1,0,1,0,0},{1,1,0,0,0,0,0,0},{1,1,0,0,0,0,0,0},{1,0,0,1,0,0,0,1},{1,1,1,1,0,0,1,0},{0,0,0,0,0,0,0,1} }, n = 8, nrdeobiecte = 1;

void Umpleobiect(int i, int j)
{
	int l;
	if (A[i][j] == 1)
	{
		A[i][j] = nrdeobiecte;
		for (l = 0; l < 8; l++)
			Umpleobiect(i + x[l], j + y[l]);
	}
}

void main()
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (A[i][j] == 1)
			{
				nrdeobiecte++;
				Umpleobiect(i, j);
			}
		}
	}
	printf("\nIn fotografie sunt %d obiecte.\n", nrdeobiecte - 1);
	system("pause");
}