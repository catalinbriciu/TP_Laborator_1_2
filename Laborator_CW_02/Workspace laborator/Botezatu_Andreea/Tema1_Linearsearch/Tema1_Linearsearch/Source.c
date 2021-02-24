#include<stdlib.h>
#include<stdio.h>

int CautareLiniara(int *TablouCautare, int NrElemente, int ElementCautat)
{
	int Pozitie;
	for (Pozitie = 0; Pozitie < NrElemente; Pozitie++)
		if (TablouCautare[Pozitie] == ElementCautat) {
			return Pozitie + 1;
		}
	return 0;
}

int main()
{
	int TablouCautare[250], NrElemente, ElementCautat, Pozitie, Rezultat;
	printf("Dati numarul de elemente al tabloului:\n");
	scanf("%d", &NrElemente);
	printf("Dati elementele tabloului:\n");
	for (Pozitie = 0; Pozitie < NrElemente; Pozitie++)
		scanf("%d", &TablouCautare[Pozitie]);

	printf("Dati elementul de cautat: ");
	scanf("%d", &ElementCautat);

	Rezultat = CautareLiniara(TablouCautare, NrElemente, ElementCautat);
	if (Rezultat == 0) 
		printf("\nElementul %d nu exista un tabloul dat\n", ElementCautat);
	else 
		printf("\nElementul %d se gaseste pe pozitia %d\n", ElementCautat, Rezultat);
	return 0;
}
//prima varianta