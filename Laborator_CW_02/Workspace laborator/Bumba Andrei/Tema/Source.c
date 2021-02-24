#include <stdio.h>
#include <stdlib.h>
unsigned char CautareLiniara(short int *TablouCautare, short int ElementCautat,int NrElemente)
{
	int i;
	printf("Introduceti elemntele:\n");
	for (i = 0; i < NrElemente; i++)
	{
		printf("TablouCautare[%d]= ", i);
		scanf("%hd", &TablouCautare[i]);
	}
	for (i = 0; i < NrElemente; i++)
		if (ElementCautat == TablouCautare[i])
			return i;
	return -1;
}
int main()
{
	short int ElementCautat;
	short int *TablouCautare;
	int NrElemente, verificare;
	printf("Numarul de elemente este: ");
	scanf("%d", &NrElemente);
	printf("Elementul cautat este: ");
	scanf("%hd", &ElementCautat);
	TablouCautare = (short int *)malloc(NrElemente * sizeof(short int));
	verificare = CautareLiniara(TablouCautare, ElementCautat, NrElemente);
	if (verificare != 255)
		printf("Elementul %hd se afla pe pozitia %d!\n", ElementCautat, verificare);
	else
		printf("Elementul %hd nu se afla in tablou!\n", ElementCautat);
	return 0;
}