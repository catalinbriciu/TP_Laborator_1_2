#include<stdio.h>
#include<stdlib.h>
char x[8] = { -1,-1,-1,0,1,1,1,0 };
char y[8] = { -1,0,1,1,1,0,-1,-1 };
unsigned char A[100][100] = { {0,0,0,1,1,0,1,0},
{1,1,0,0,0,1,0,0},{1,1,0,1,0,1,0,0},
{1,1,0,0,0,0,0,0},{1,1,0,0,0,0,0,0},
{1,0,0,1,0,0,0,1},{1,1,1,1,0,0,1,0},
{0,0,0,0,0,0,0,1} }, n = 8, numarObj = 1;
void FillObj(unsigned char i, unsigned char j) { 
	unsigned char k; 
	if (A[i][j] == 1) {
		A[i][j] = numarObj; //numarul curent al obiectului
		for (k = 0; k < 8; k++) //cele 8 directii
			FillObj(i + x[k], j + y[k]);
	}
}
int main()
{
	unsigned char i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%hhu ", A[i][j]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (A[i][j] == 1)
			{
				numarObj++;
				FillObj(i, j);
			}
	printf("\nFotografia are %hhu obiecte.\n", numarObj - 1);
	return 0;
}