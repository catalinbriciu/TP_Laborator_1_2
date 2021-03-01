#include<stdlib.h>
#include<stdio.h>
unsigned short int ElementCautat, TablouCautare[250];
unsigned  char NrumarElemente;

void Citire(unsigned short int *TablouCautare, unsigned char *NrumarElemente, unsigned short int *ElementCautat){
	unsigned char PozitieElement;
	printf("Dati numarul de elemente al multimii: ");
	scanf("%d", NrumarElemente);
	for (PozitieElement = 0; PozitieElement < *NrumarElemente; PozitieElement++) {
		printf("TablouCautare[%hhu]=", PozitieElement);
		scanf("%d", &TablouCautare[PozitieElement]);
	}
	printf("Dati numarul pe care il cautati: ");
	scanf("%d", ElementCautat);
}

unsigned char cautare_binara(unsigned short int ElementCautat, unsigned char *NrumarElemente, unsigned short int TablouCautare[]){
	unsigned char li = 0, lf=NrumarElemente, pivot;
	while (li <= lf) {
		pivot = (li + lf) / 2;
		if (TablouCautare[pivot] == ElementCautat) {
			return pivot;
		}
		else if (ElementCautat < TablouCautare[pivot]) {
			li = pivot;
		}
		else if (ElementCautat > TablouCautare[pivot]) {
			lf = pivot;
		}
	}
	

}
int main() {
	Citire(TablouCautare, &NrumarElemente, &ElementCautat);
	printf("Elementul cautat este pe pozitia: %d\n", cautare_binara(ElementCautat, NrumarElemente, TablouCautare));
	system("pause");
	return 0;
}