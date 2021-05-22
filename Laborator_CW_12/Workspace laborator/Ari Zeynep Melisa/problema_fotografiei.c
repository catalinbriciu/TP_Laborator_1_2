#include<stdio.h>
#include<stdlib.h>

char x[8] = { -1,-1,-1,0,1,1,1,0 };
char y[8] = { -1,0,1,1,1,0,-1,-1 };
int A[100][100] = { {0,0,0,1,1,0,1,0},
{1,1,0,0,0,1,0,0},{1,1,0,1,0,1,0,0},
{1,1,0,0,0,0,0,0},{1,1,0,0,0,0,0,0},
{1,0,0,1,0,0,0,1},{1,1,1,1,0,0,1,0},
{0,0,0,0,0,0,0,1} }, n = 8, numarObj = 1;

void FillObj(int i, int j) {
	int k;
	if (A[i][j] == 1) {
		A[i][j] = numarObj; 
		for (k = 0; k < 8; k++) 
			FillObj(i + x[k], j + y[k]);
	}
}

int main() {
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (A[i][j] == 1) {
				numarObj++;
				FillObj(i, j);
			}
	printf("\nFotografia are %d obiecte.\n", numarObj - 1);

	system("pause");
	return 0;
}