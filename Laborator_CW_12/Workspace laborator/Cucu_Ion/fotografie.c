#include<stdio.h>
#include<stdlib.h>
int x[8] = { -1,-1,-1,0,1,1,1,0 };
int y[8] = { -1,0,1,1,1,0,-1,-1 };
int a[100][100] = { {0,0,0,1,1,0,1,0},
{1,1,0,0,0,1,0,0},{1,1,0,1,0,1,0,0},
{1,1,0,0,0,0,0,0},{1,1,0,0,0,0,0,0},
{1,0,0,1,0,0,0,1},{1,1,1,1,0,0,1,0},
{0,0,0,0,0,0,0,1} }, n = 8, numarObj = 1;
void FillObj(int i, int j) { //marcare recursiva
	int k; //local !
	if (a[i][j] == 1) {
		a[i][j] = numarObj; //numarul curent al obiectului
		for (k = 0; k < 8; k++) //cele 8 directii
			FillObj(i + x[k], j + y[k]);
	}
}
int main()
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] == 1)
			{
				numarObj++;
				FillObj(i, j);
			}
	printf("\n\nFotografia are %d obiecte.\n\n", numarObj - 1);
	return 0;
}