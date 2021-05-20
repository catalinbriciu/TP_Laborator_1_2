#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int X[4] = {-1,0,1,0}, Y[4] = {0,1,0,-1};
int Matrice[8][8] ={
{0,0,0,1,1,0,1,0},
{1,1,0,0,0,1,0,0},
{1,1,0,1,0,1,0,0},
{1,1,0,0,0,0,0,0},
{1,1,0,0,0,0,0,0},
{1,0,0,1,0,0,0,1},
{1,1,1,1,0,0,1,0},
{0,0,0,0,0,0,0,1}
};

void Iesire(int Linie, int Coloana);
void Afisare();


void main() {



	Iesire(5, 2);


	system("pause");
}
void Iesire(int Linie, int Coloana) {


	if (Linie == 0 || Linie == 7 || Coloana == 0 || Coloana == 7)
		Afisare();

	else
		for (int C = 0; C < 4; C++) {
	
			if (Matrice[Linie + X[C]][Coloana + Y[C]] == 0) {
				Matrice[Linie + X[C]][Coloana + Y[C]] = Matrice[Linie][Coloana] + 1;
				Iesire(Linie + X[C], Coloana + Y[C]);
				Matrice[Linie + X[C]][Coloana + Y[C]] = 0;
			}
		
	}
 }
void Afisare() {

	for (int Linie = 0; Linie < 8; Linie++) {

		for (int Coloana = 0; Coloana < 8; Coloana++)
			printf("%d", Matrice[Linie][Coloana]);

printf("\n");

 }
	printf("\n");
}