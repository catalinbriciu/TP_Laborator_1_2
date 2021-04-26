#include<stdlib.h>
#include<stdio.h>
//mascare=bitul devine 0
#define MAX 10

unsigned short int Stiva[MAX], VarfStiva;

void Push(unsigned short int *Stiva, unsigned short int *VarfStiva, unsigned char Valoare) {
	Stiva[(*VarfStiva)++] = Valoare;
}

unsigned short int Pop(unsigned short int *Stiva, unsigned short int *VarfStiva) {
	return Stiva[(*VarfStiva)--];
}

unsigned char IsStackEmpty(unsigned short int *VarfStiva) {
	if (*VarfStiva == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void creare_stiva(unsigned short int *Stiva, unsigned short int *VarfStiva) {
	unsigned char pozitie;
	*VarfStiva = 0;
	for (pozitie = 0; pozitie < MAX; pozitie++) {
		Stiva[pozitie] = 0;
	}
}

void adaugare_stiva(unsigned short int *Stiva, unsigned short int *VarfStiva) {
	Push(Stiva, &VarfStiva, 3);
	Push(Stiva, &VarfStiva, 7);
	Push(Stiva, &VarfStiva, 10);
	Push(Stiva, &VarfStiva, 2);
	Push(Stiva, &VarfStiva, 15);
	Push(Stiva, &VarfStiva, 30);
	Push(Stiva, &VarfStiva, 13);
}

void parcurgere_stiva(unsigned short int *Stiva, unsigned short int *VarfStiva) {
	unsigned short int numar;
	while (!IsStackEmpty(&VarfStiva)) {
		numar = Pop(Stiva, &VarfStiva);
		printf("Numarul de biti de 1 al numarului %hu este: %huu\n", numar, cati_biti_de_1(numar));

	}
}

unsigned char cati_biti_de_1(unsigned short int numar) {
	unsigned char contor = 0, i;
	for (i = 31; i >= 0; i--) {
		if ((numar >> i) & 1) {
			contor++;
		}
	}
	return contor;
}

unsigned short int mascare_bit_2(unsigned short int numar) {
	return (numar | (0 << 2));
}

int main() {
	creare_stiva(Stiva, &VarfStiva);
	adaugare_stiva(Stiva, &VarfStiva);
	parcurgere_stiva(Stiva, &VarfStiva);

	system("pause");
	return 0;
}