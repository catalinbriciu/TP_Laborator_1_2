#include<stdlib.h>
#include<stdio.h>
unsigned short int ElementCautat, TablouCautare[250];
unsigned  char NrElemente;

void Citire(unsigned short int *TablouCautare, unsigned char *NrElemente, unsigned short int *ElementCautat)
{
	unsigned char Index;
	printf("Dati numarul de elemente al multimii: ");
	scanf("%hhu", NrElemente);
	printf("Dati numarul pe care il cautati: ");
	scanf("%hu", ElementCautat);
	for (Index = 0; Index < *NrElemente; Index++) {
		printf("TablouCautare[%hhu]=", Index);
		scanf("%hu", &TablouCautare[Index]);
	}
}
/*functie pentru cautarea in tablou a numarului introdus de la tastatura,in cazul gasirii
se afiseaza pozitia sa, in caz contrar se afiseaza 0.*/
unsigned char cautare(unsigned short int ElementCautat, unsigned short int NrElemente, unsigned short int TablouCautare[])
{
	unsigned char Index = 1;
	while ((Index < NrElemente) && (ElementCautat != TablouCautare[Index]))
		Index = Index + 1;
	if (ElementCautat == TablouCautare[Index]) {
		printf("Elementul  cautat se afla pe pozitia: ");
		return Index;
	}
	else 	
		return 0;
}
int main() {
	Citire(TablouCautare, &NrElemente, &ElementCautat);
    printf("%hhu\n", cautare(ElementCautat, NrElemente, TablouCautare));
	system("pause");
	return 0;
}