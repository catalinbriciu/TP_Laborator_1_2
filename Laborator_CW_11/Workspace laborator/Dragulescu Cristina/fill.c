#include<stdio.h>
#include<stdlib.h>


int Matrice[7][6] = {
	{0,0,1,1,1,1},
	{1,1,0,0,0,1},
	{1,1,0,0,0,1},
	{1,1,0,0,1,1},
	{1,1,1,1,0,0},
	{1,0,0,1,0,0},
	{1,1,1,1,0,0}
};


void FILL(int i, int j);


int main()
{
	int m,n,i,j;
	
	printf("Matrice:\n");
	
	for (m = 0; m < 7; m++)
	{
		for (n = 0; n < 6; n++)
		
			printf("  %d  ", Matrice[m][n]);
	
		printf("\n");
	}

	printf("\nAlegeti coordonatele pentru umplere:");
	scanf("%d", &i);
	scanf("%d", &j);
	FILL(i, j);
	for (m = 0; m < 7; m++)
	{
		for (n = 0; n < 6; n++)

			printf("  %d  ", Matrice[m][n]);

		printf("\n");
	}

	system("pause");
	return 0;
}

void FILL(int i, int j)
{ // FILL/umplere recursiva

	if (!Matrice[i][j]) {
		Matrice[i][j] = 1; //umple
		FILL(i - 1, j); //sus
		FILL(i, j + 1); //dreapta
		FILL(i + 1, j); //jos
		FILL(i, j - 1); //stanga
	}
}