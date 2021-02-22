#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)
unsigned char NrElemente;
unsigned short int TablouCautare[250], ElementCautat;

void Citire(unsigned short int *TablouCautare, unsigned char *NrElemente, unsigned short int *ElementCautat) {
	
	printf("Dati numarul de elemente din tablou: ");
	scanf("%hhu", NrElemente);

	for (unsigned char Index = 0; Index < *NrElemente; Index++) {
		scanf("%hu", &TablouCautare[Index]);
	}

	printf("Dati elementul cautat: ");
	scanf("%hu", ElementCautat);

}

//NOTE: changed short int to unsigned short int (short int -32768 to 32767 and unsigned short int 65535)
unsigned char CautareLiniara(unsigned short int *TablouCautare, unsigned short int ElementCautat) {

	unsigned char Index = 0;
	
	while (Index < NrElemente && ElementCautat != TablouCautare[Index]) {
		Index++;
	}

	if (ElementCautat == TablouCautare[Index]) {
		return Index;
	} else {
		return 255;
	}
}



int main() {
	
	Citire(TablouCautare, &NrElemente, &ElementCautat);
	if (CautareLiniara(TablouCautare, ElementCautat) != 255) {
		printf("Elementul se afla pe pozitia %hhu\n", CautareLiniara(TablouCautare, ElementCautat));
	} else {
		printf("Nu am gasit elementul in tablou!\n");
	}
		
	system("pause");
	return 0;
}