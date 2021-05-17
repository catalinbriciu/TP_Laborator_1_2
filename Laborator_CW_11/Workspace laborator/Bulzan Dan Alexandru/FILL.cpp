#define _CRT_SECURE_NO_WARNINGS
#define MaxSize 100
#include<stdlib.h>
#include<stdio.h>
int Matrice[100][100] = {
{0,0,1,1,1,1},
{1,1,0,0,0,1},
{1,1,0,0,0,1},
{1,1,0,0,1,1},
{1,1,1,1,0,0},
{1,0,0,1,0,0},
{1,1,1,1,0,0} };

void Fill(int i, int j);
void Afisare();

int main() {


	Fill(2, 3);
	Afisare();

	system("pause");
	return 0;
}

void Fill(int i, int j) {


	if (!Matrice[i][j]) {

		Matrice[i][j] = 1;
		Fill(i + 1, j);
		Fill(i, j + 1);
		Fill(i - 1, j);
		Fill(i,j - 1);


	}


}

void Afisare() {

	for (int i = 0; i < 7; i++) {

		for (int j = 0; j < 6; j++)
			printf("%d ", Matrice[i][j]);



		printf("\n");
	}
}