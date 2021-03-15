/* Se dă o mulțime de numere naturale cu valori de la 0 la 1000. Se citescde la intrare diferite valori în intervalul [0,1000], să se utilizeze unvector de octeți de dimensiune cât mai mică pentru memorarea elementelor mulțimii.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned short int *Vector, NrElemente, cnt;
	printf("Introduceti numarul de elemente: ");
	scanf("%hu", &NrElemente);
	Vector = (unsigned short int *)malloc(NrElemente * sizeof(unsigned short int));
	for (cnt = 0; cnt < NrElemente; cnt++)
	{
		printf("Element %hhu: ", cnt);
		scanf("%hu", &Vector[cnt]);
	}
	for (cnt = 0; cnt < NrElemente; cnt++)
		printf("%hu ", Vector[cnt]);
}