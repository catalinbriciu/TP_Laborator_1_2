#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int X[8] = { -1,-1,-1,0,1,1,1,0 }, Y[8] = { -1,0,1,1,1,0,-1,-1 };
int Matrice[8][8] = {
	{0,0,0,1,1,0,1,0},
	{1,1,0,0,0,1,0,0},
	{1,1,0,1,0,1,0,0},
	{1,1,0,0,0,0,0,0},
	{1,1,0,0,0,0,0,0},
	{1,0,0,1,0,0,0,1},
	{1,1,1,1,0,0,1,0},
	{0,0,0,0,0,0,0,1} 
};

int Obiect = 1;

void Fill(int Linie, int Coloana);
void Print();


void main() {


	for (int Linie = 0; Linie < 8; Linie++) 
		for (int Coloana = 0; Coloana < 8; Coloana++) {

			if (Matrice[Linie][Coloana] == 1) {
				Obiect += 1;
				Fill(Linie, Coloana);
				

			}

		}

	Print();

	system("pause");

}
void Fill(int i, int j) {

	int C;

	if (Matrice[i][j] == 1) {
		if (i >= 0 && j >= 0) {
			Matrice[i][j] = Obiect;
			for (C = 0; C < 8; C++)
				Fill(i + X[C], j + Y[C]);
		}
	}

}
void Print() {

	for (int Linie = 0; Linie < 8; Linie++){
		for (int Coloana = 0; Coloana < 8; Coloana++)
			printf("%d ", Matrice[Linie][Coloana]);

		printf("\n");
			

		}
}