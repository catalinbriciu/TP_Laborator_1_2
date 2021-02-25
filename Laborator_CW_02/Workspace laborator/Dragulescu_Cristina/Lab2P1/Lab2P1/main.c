#include<stdio.h>
#include<stdlib.h>


unsigned char cautareliniara(short int vector[], short int  nr_elemente, short int nr_cautat)
{
	int i;
	for (i = 0; i < nr_elemente; i++)
		if (vector[i] == nr_cautat)
			return i;
	return 0;
}
int main()
{
	short int vector[50], nr_elemente, i, nr_cautat,rezultat;
	printf("Dati numarul de elemente:");
	scanf("%hd", &nr_elemente);
	for (i = 0; i < nr_elemente; i++)
	{
		printf("vector[%hd]=", i);
		scanf("%hd", &vector[i]);
	}
	printf("vector=");
	for (i =0; i < nr_elemente; i++)
		printf("%hd", vector[i]);
	printf("\nDati element de cautat:");
	scanf("%hd", &nr_cautat);
	rezultat = cautareliniara(vector, nr_elemente, nr_cautat);
	if (rezultat == 0)printf("nu a fost gasit elementul cautat in vector");
	else printf("elementul cautat se afla in vector");
	system("pause");
	return 0;

}