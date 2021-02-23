#include<stdlib.h>
#include<stdio.h>

unsigned char CautareLiniara(short int *TablouCautare, unsigned char NumarElementeTablou, short int ElementCautat) 
{
	unsigned char pozitie;
	for (pozitie = 0; pozitie < NumarElementeTablou; pozitie++)
		if (TablouCautare[pozitie] == ElementCautat)
			return pozitie + 1;
	return 0;
}

int main()
{
	short int TablouCautare[40], ElementCautat;
	unsigned char pozitie, NumarElementeTablou;

	printf("Dati numarul de elemente al tabloului: ");
	scanf("%d", &NumarElementeTablou);
	printf("Dati elementele tabloului: ");
	for (pozitie = 0; pozitie < NumarElementeTablou; pozitie++)
		scanf("%d", &TablouCautare[pozitie]);

	printf("Dati elementul de cautat: ");
	scanf("%d", &ElementCautat);
	printf("%d", CautareLiniara(TablouCautare, NumarElementeTablou, ElementCautat));

	system("pause");
	return 0;
}