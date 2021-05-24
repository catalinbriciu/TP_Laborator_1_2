//bibliotecile
#include<stdio.h>
#include<stdlib.h>

//declaram global vectorii x si y si matricea A
int x[8] = { -1,-1,-1,0,1,1,1,0 };
int y[8] = { -1,0,1,1,1,0,-1,-1 };
int A[100][100] = { {0,0,0,1,1,0,1,0},{1,1,0,0,0,1,0,0},{1,1,0,1,0,1,0,0},{1,1,0,0,0,0,0,0},{1,1,0,0,0,0,0,0},{1,0,0,1,0,0,0,1},{1,1,1,1,0,0,1,0},{0,0,0,0,0,0,0,1} }, n = 8, numarul_de_obiecte = 1;
void fill_obiect(int i, int j) 
{ 
	int l; 
	if (A[i][j] == 1) {
		A[i][j] = numarul_de_obiecte; 
		for (l = 0; l < 8; l++) 
			fill_obiect(i + x[l], j + y[l]);
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
				numarul_de_obiecte++;
				fill_obiect(i, j);
			}
		}
	}
	printf("\nIn fotografie sunt %d obiecte.\n", numarul_de_obiecte - 1);
	system("pause");
}