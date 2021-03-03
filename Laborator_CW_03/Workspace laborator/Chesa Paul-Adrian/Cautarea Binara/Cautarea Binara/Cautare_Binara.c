#include<stdio.h>

unsigned short int ElementCautat;
unsigned char *NrElemente, Tablou[250];

void citire(unsigned short int *Tablou, unsigned char *NrElemente)
{
	printf("Dati numarul de elemente :");
	scanf("%hhu", NrElemente);

	for (unsigned char i = 0; i < *NrElemente; i++)
	{
		printf("Tablou[%d]= ", i);
		scanf("%hhu", &Tablou[i]);
	}
	for (unsigned char i = 0; i < *NrElemente; i++)
	{
		printf("%hhu ", Tablou[i]);
	}


}

unsigned char CautareBinara(short int *Tablou, short int ElementCautatat)
{
	unsigned char li=0,ls=NrElemente,pivot;  //li =limita inferioara , ls =limita superioara
	printf("\nDati elementul cautat: ");
	scanf("%hu", &ElementCautat);

	while (li <= ls)
	{

		pivot = (li + ls) / 2;
		if (ElementCautat == Tablou[pivot]) {
			return 1;
		}
		else if (ElementCautat < Tablou[pivot]) {
			ls = pivot - 1;
		}
		else if (ElementCautat > Tablou[pivot]) {
			li = pivot + 1;
		}
		
			return 250;
		
	}
	




}

int main()
{
	citire(Tablou, &NrElemente, &ElementCautat);
	if (CautareBinara(Tablou, ElementCautat) != 250)
	{
		printf("Element gasit  ! ");
	}
	else
		printf("Elementul nu a fost gasit !");


	return 0;
}