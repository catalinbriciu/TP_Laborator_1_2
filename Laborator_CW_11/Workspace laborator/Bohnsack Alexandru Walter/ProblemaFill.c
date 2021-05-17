//Bibliotecile
#include<stdio.h>
#include<stdlib.h>

//Ignoram eroarea 4996
#pragma warning(disable:4996)

//Maticea initiala
int Matrice[7][6] = 
{
	{0,0,1,1,1,1},
	{1,1,0,0,0,1},
	{1,1,0,0,0,1},
	{1,1,0,0,1,1},
	{1,1,1,1,0,0},
	{1,0,0,1,0,0},
	{1,1,1,1,0,0}
};

//Functia de modificare 
void fill(int i, int j)
{
	if (!Matrice[i][j])
	{
		Matrice[i][j] = 1;
		fill(i - 1, j);
		fill(i, j + 1);
		fill(i + 1, j);
		fill(i, j - 1);
	}
}

void main()
{
	int i, j, k, p;
	printf("Alegeti coord pct P: (1,2/3/4), (2,2/3/4), (4,2/3), (5,1/2)\nCel mai sugestiv exemplu P(2,3)\n");
	scanf("%d %d", &i, &j);
	printf("Matricea initiala:\n");
	//Afisarea matricei inainte de modificare
	for (k = 0; k < 7; k++)
	{
		for (p = 0; p < 6; p++)
			printf("%d  ", Matrice[k][p]);
		printf("\n");
	}
	printf("\n");
	printf("Matricea dupa folosirea tehnicii FILL:\n");
	fill(i, j);
	for (k = 0; k < 7; k++)
	{
		for (p = 0; p < 6; p++)
			printf("%d  ", Matrice[k][p]);
		printf("\n");
	}
	system("pause");
}