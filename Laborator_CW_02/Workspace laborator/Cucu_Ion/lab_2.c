#include<stdlib.h>
#include<stdio.h>
unsigned short int ElementCautat, TablouCautare[250];
unsigned  char NrumarElemente;

void Citire(unsigned short int *TablouCautare, unsigned char *NrumarElemente, unsigned short int *ElementCautat)
{
	unsigned char PozitieElement;
	printf("Dati numarul de elemente al multimii: ");
	scanf("%d", NrumarElemente);
	for (PozitieElement = 0; PozitieElement< *NrumarElemente; PozitieElement++) {
		printf("TablouCautare[%hhu]=", PozitieElement);
		scanf("%d", &TablouCautare[PozitieElement]);
	}
	printf("Dati numarul pe care il cautati: ");
	scanf("%d", ElementCautat);
}

unsigned char cautare(unsigned short int ElementCautat, unsigned short int NrElemente, unsigned short int TablouCautare[])
{
	unsigned char PozitieElement = 1;
	while ((PozitieElement < NrumarElemente) && (ElementCautat != TablouCautare[PozitieElement]))
		PozitieElement = PozitieElement + 1;
	if (ElementCautat == TablouCautare[PozitieElement]) {
		printf("Elementul  cautat se afla pe pozitia: ");
		return PozitieElement;
	}
	else
	 return 0;
}
int main() {
	Citire(TablouCautare, &NrumarElemente, &ElementCautat);
	printf("%d\n", cautare(ElementCautat, NrumarElemente, TablouCautare));
	system("pause");
	return 0;
}