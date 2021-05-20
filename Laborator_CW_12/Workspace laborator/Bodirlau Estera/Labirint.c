#include<stdio.h>
#include<stdlib.h>
char x[8] = { -1,-1,-1,0,1,1,1,0 };
char y[8] = { -1,0,1,1,1,0,-1,-1 };
unsigned char A[100][100] = { {0,0,0,1},{1,1,0,0},
{1,1,0,0},{1,1,0,0},{1,0,0,0,0},{1,0,0,1},
{1,1,0,1,0},{0,0,0,1} }, n = 4, m = 4, iesire;

void Search(unsigned char i, unsigned char j) {
	unsigned char k;
	if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
		iesire++;
		printf("%hhu %hhu\n", i, j);
	}
	else
		for (k = 0; k < 8; k++) {
			if (A[i + x[k]][j + y[k]] == 0) {
				A[i + x[k]][j + y[k]] = A[i][j] + 1;
				Search(i + x[k], j + y[k]);
				A[i + x[k]][j + y[k]] = 0;
			}
		}
}
int main()
{
	unsigned char i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%hhu ", A[i][j]);
		printf("\n");
	}
	printf("\nIesiri posibile:\n");
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (A[i][j] == 1)
				Search(i, j);
	printf("\n Numarul total de Iesiri este %hhu \n\n", iesire);
	system("pause");
	return 0;
}