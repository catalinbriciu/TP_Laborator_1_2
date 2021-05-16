#include<stdio.h>
#include<stdlib.h>

int matToBeFilled[7][6] = {
	{0,0,1,1,1,1},
	{1,1,0,0,0,1},
	{1,1,0,0,0,1},
	{1,1,0,0,1,1},
	{1,1,1,1,0,0},
	{1,0,0,1,0,0},
	{1,1,1,1,0,0}
};

void FILL(int i, int j) {
	if (!matToBeFilled[i][j]) {
		matToBeFilled[i][j] = 1; //umple
		FILL(i - 1, j); //sus
		FILL(i, j + 1); //dreapta
		FILL(i + 1, j); //jos
		FILL(i, j - 1); //stanga
	}
}

int main()
{
	int i, j;
	printf("Alegeti coord pct P: (1,2/3/4), (2,2/3/4), (4,2/3), (5,1/2)\nCel mai sugestiv exemplu P(2,3)\n");
	scanf("%d %d", &i, &j);
	printf("Matricea initiala\n");
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
			printf("%d  ", matToBeFilled[x][y]);
		printf("\n");
	}
	printf("\n");
	printf("Matricea dupa folosirea tehnicii FILL\n");
	FILL(i, j);
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
			printf("%d  ", matToBeFilled[x][y]);
		printf("\n");
	}
	system("pause");
	return 0;
}