#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned short  Stiva[9];


void Citire(unsigned short Stiva[]) {


	for (int i = 0; i < 7; i++)
		scanf("%hu", &Stiva[i]);


}

void Afisare(unsigned short Stiva[]) {


	for (int i = 0; i < 7; i++)
		printf("%d ", Stiva[i]);

	printf("\n");
}



unsigned short Numar_1(unsigned short Number) {

	unsigned short  Contor = 0;

	for (int  i = (int)log2(Number); i >= 0; i--)

		if ((1 & (Number >> i)) == 1)Contor += 1;

	return Contor;

}

unsigned short Mascare_2(unsigned short Number) {


	/*if ((1 & (Number >> 2)) == 1)
		if ((1 & (Number >> 0)) == 0)
			Number = Number | (1 << 0);


	if ((1 & (Number >> 2)) == 0)
		if ((1 & (Number >> 0)) == 1)
			Number = Number & ~(1 << 0);*/


	
	if ((1 & (Number >> 2)) == 1)
		Number = Number & ~(1 << 2);
		  
	return Number;
}

unsigned short Bit6_0(unsigned short Number) {


	if ((1 & (Number >> 6)) == 1)
		Number = Number & ~(1 << 6);

	return Number;

}

void Problema(unsigned short Stiva[]) {



	for (int i = 0; i < 7; i++) {
		printf("Pentru numarul %d ; biti de 1: %d\n", i+1, Numar_1(Stiva[i]));

		printf("Pentrul numarul %d ;Dupa  mascare bitului 2: %d\n",i+1, Mascare_2(Stiva[i]));

		printf("Pentrul numarul %d ;Dupa  ce bitul 6 devine 0 : %d\n", i + 1, Bit6_0(Stiva[i]));
	}


}

void main() {

	Citire(&Stiva[0]);

	Afisare(&Stiva[0]);

	Problema(&Stiva[0]);
	




	system("pause");
}