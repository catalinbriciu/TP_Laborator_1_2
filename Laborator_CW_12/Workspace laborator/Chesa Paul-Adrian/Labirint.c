#include<stdio.h>
#include<stdlib.h>


int x[8] = { -1,-1,-1,0,1,1,1,0 };
int y[8] = { -1,0,1,1,1,0,-1,-1 };
int A[100][100] = { {0,0,0,1},{1,1,0,0},{1,1,0,0},{1,1,0,0},{1,0,0,0,0},{1,0,0,1},{1,1,0,1,0},{0,0,0,1} }, n = 4, m = 4, iesire;

void cautarea(int i, int j)
{
	int l;
	if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
	{
		iesire++;
		printf("%d %d\n", i, j);
	}
	else
		for (l = 0; l < 8; l++)
		{
			if (A[i + x[l]][j + y[l]] == 0)
			{
				A[i + x[l]][j + y[l]] = A[i][j] + 1;
				cautarea(i + x[l], j + y[l]);
				A[i + x[l]][j + y[l]] = 0;
			}
		}
}
void main()
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	printf("\nIesiri:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (A[i][j] == 1)
			{
				cautarea(i, j);
			}
		}
	}

	printf("\nSunt %d metode de a iesi din labirint!\n\n", iesire);
	system("pause");
}