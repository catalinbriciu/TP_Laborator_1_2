#include <stdio.h>
#include <stdlib.h>

unsigned char CautareLiniara(short int *TablouCautare, short int ElementCautat)
{

	int Pozitie, NrElemente, Contor = 0;
	printf("Introduceti numarul de elemente:\n");
	scanf("%d", &NrElemente);

	TablouCautare = (short int *)malloc(NrElemente * sizeof(short int));
	printf("\nIntroduceti elemntele: \n");
	for (Pozitie = 0; Pozitie < NrElemente; Pozitie++)
		scanf("%d", &TablouCautare[Pozitie]);

	printf("\nIntrodu elementul cautat: ");
	scanf("%d", &ElementCautat);

	for (Pozitie = 0; Pozitie < NrElemente; Pozitie++)
		if (ElementCautat == TablouCautare[Pozitie]) {
			printf("\nElementul a fost gasit pe pozitia: %d\n", Pozitie + 1);
			Contor++;
		}
	if (Contor == 0) {
		printf("\nElementul nu a fost gasit!\n");
	}
	printf("Elementul cautat a fost gasit de %d ori\n", Contor);
}

int main()
{
	short int ElementCautat, *TablouCautare;
	CautareLiniara(&TablouCautare, &ElementCautat);
	system("pause");
	return 0;
}