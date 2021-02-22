#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)
short int NrElemente, ElementCautat;
short int TablouCautare[250];

void Citire(short int *TablouCautare, short int *NrElemente, short int *ElementCautat) {
	
	printf("Dati numarul de elemente din tablou: ");
	scanf("%hi", NrElemente);

	for (int Index = 0; Index < *NrElemente; Index++) {
		scanf("%hi", &TablouCautare[Index]);
	}

	printf("Dati elementul cautat: ");
	scanf("%hi", ElementCautat);

}

unsigned char CautareLiniara(short int *TablouCautare, short int ElementCautat) {

	int Index = 1;

	while (Index < NrElemente && ElementCautat != TablouCautare[Index]) {
		Index++;
	}

	if (ElementCautat == TablouCautare[Index]) {
		return Index;
	} else {
		return 0;
	}
}



int main() {
	
	Citire(TablouCautare, &NrElemente, &ElementCautat);
	printf("Elementul se afla pe pozitia %hi\n", CautareLiniara(TablouCautare, ElementCautat));

	system("pause");
	return 0;
}