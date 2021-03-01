#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b)
{
	return (*(short int*)a - *(short int*)b);
}

unsigned char CautareLiniara(short int *TablouCautare, short int ElementCautat, int NrElemente)
{
	int Pozitie, LI, LF, Pivot;
	printf("Introduceti elemntele:\n");
	for (Pozitie = 0; Pozitie < NrElemente; Pozitie++)
	{
		printf("TablouCautare[%d]= ", Pozitie);
		scanf("%hd", &TablouCautare[Pozitie]);
	}
	qsort(TablouCautare, NrElemente, sizeof(short int), cmp);
	printf("\nDupa sortare: ");
	for (Pozitie = 0; Pozitie < NrElemente; Pozitie++)
	{
		printf("\nTablouCautare[%d]=%hd", Pozitie, TablouCautare[Pozitie]);
	}
	LI = 0;
	LF = NrElemente;
	while (LI <= LF)
	{
		Pivot = (LI + LF) / 2;
		if (ElementCautat == TablouCautare[Pivot])
			return Pivot;
		else if (ElementCautat < TablouCautare[Pivot])
			LF = Pivot - 1;
		else
			LI = Pivot + 1;
	}
	return -1;
}



int main()
{
	short int ElementCautat;
	short int *TablouCautare;
	int NrElemente, Rezultat;
	printf("Numarul de elemente este: ");
	scanf("%d", &NrElemente);
	printf("Elementul cautat este: ");
	scanf("%hd", &ElementCautat);
	TablouCautare = (short int *)malloc(NrElemente * sizeof(short int));
	Rezultat = CautareLiniara(TablouCautare, ElementCautat, NrElemente);
	if (Rezultat != -1)
		printf("\nElementul %hd se afla pe pozitia %d\n", ElementCautat, Rezultat);
	else
		printf("\nElementul %hd nu exista in tablou\n", ElementCautat);
	return 0;
}