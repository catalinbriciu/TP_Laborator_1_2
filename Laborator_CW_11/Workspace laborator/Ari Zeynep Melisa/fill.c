#include<stdio.h>
#include<stdlib.h>

int A[7][6] = {
	{0,0,1,1,1,1},
	{1,1,0,0,0,1},
	{1,1,0,0,0,1},
	{1,1,0,0,1,1},
	{1,1,1,1,0,0},
	{1,0,0,1,0,0},
	{1,1,1,1,0,0}
};

void FILL(int i, int j) {
	if (!A[i][j]) {
		A[i][j] = 1;
		FILL(i - 1, j); //sus
		FILL(i, j + 1); //dreapta
		FILL(i + 1, j); //jos
		FILL(i, j - 1); //stanga
	}
}

int main() {
	unsigned char i, j, x, y;
	printf("Coordonatele punctului P: ");
	scanf("%d %d", &x, &y);
	printf("Matricea pe care se vor realiza modificarile:\n");
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("Matricea dupa realizarea modificarilor:\n");
	FILL(i, j);
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}