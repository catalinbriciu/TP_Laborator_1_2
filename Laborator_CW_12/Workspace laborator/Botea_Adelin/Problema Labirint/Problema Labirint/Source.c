#include<stdio.h>
#include<stdlib.h>
int x[8] = { -1,-1,-1,0,1,1,1,0 };
int y[8] = { -1,0,1,1,1,0,-1,-1 };
int a[100][100] = { {0,0,0,1},{1,1,0,0},{1,1,0,0},{1,1,0,0},{1,0,0,0,0},{1,0,0,1},{1,1,0,1,0},{0,0,0,1} }, n = 4, m = 4, iesire;
void Search(int i, int j) 
{
	int k;
	if (i == 0 || i == n - 1 || j == 0 || j == m - 1) 
	{
		iesire++;
		printf("%d %d\n", i, j);
	}
	else
		for (k = 0; k < 8; k++) 
		{
			if (a[i + x[k]][j + y[k]] == 0) {// se poate
				a[i + x[k]][j + y[k]] = a[i][j] + 1;
				Search(i + x[k], j + y[k]);
				a[i + x[k]][j + y[k]] = 0; // !!!
			}
		}
}
int main()
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i][j] == 1)
				Search(i, j);
	printf("\nSunt %d posibilitati de a iesi din labirint!\n\n", iesire);
	system("pause");
	return 0;
}