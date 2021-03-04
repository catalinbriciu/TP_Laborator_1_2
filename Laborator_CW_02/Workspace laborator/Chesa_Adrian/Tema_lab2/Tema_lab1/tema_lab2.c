#include<stdio.h>




unsigned short int ElementCautat;
unsigned char *NrElemente, Tablou[250];

void citire(unsigned short int* Tablou, unsigned char *NrElemente)
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

unsigned char CautareLiniara(short int* Tablou, short int ElementCautatat)
{
	 unsigned char i = 0;
	 printf("\nDati elementul cautat: ");
	 scanf("%hu", &ElementCautat);

	while (i <= NrElemente && Tablou[i] != ElementCautat)
		i++;
	if (ElementCautat==Tablou[i])
		return i;
	else
		return 250;




}

int main()
{
	citire(Tablou, &NrElemente, &ElementCautat);
	if (CautareLiniara(Tablou, ElementCautat) != 250)
	{
		printf("Element gasit  ! ");
	}
	else
		printf("Elementul nu a fost gasit !");


	return 0;
}