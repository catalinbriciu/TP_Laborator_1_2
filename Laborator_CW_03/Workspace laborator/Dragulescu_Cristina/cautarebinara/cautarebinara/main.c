#include<stdio.h>
#include<stdlib.h>


unsigned char cautarebinara(short int vector[], short int  nr_elemente, short int nr_cautat)
{
	int li, lf, k;
	li = 1; lf = nr_elemente;
	while (li <= lf)
	{
		k = (li + lf) / 2;
	if (nr_cautat == vector[k]) return 1;
	else if (nr_cautat < vector[k])  lf = k - 1;
	else li = k + 1;
    }
			return 0;
}


int main()
{
	short int vector[50], nr_elemente, nr_cautat, rezultat;
	int i;
	printf("Dati numarul de elemente:");
	scanf("%hd", &nr_elemente);
	for (i = 0; i < nr_elemente; i++)
	{
		printf("vector[%hd]=", i);
		scanf("%hd", &vector[i]);
	}
	printf("vector=");
	for (i = 0; i < nr_elemente; i++)
		printf("%hd", vector[i]);
	printf("\nDati element de cautat:");
	scanf("%hd", &nr_cautat);
	rezultat = cautarebinara(vector, nr_elemente, nr_cautat);
	if (rezultat == 0)printf("%hd", rezultat);
	else printf("%hd", rezultat);
	system("pause");
	return 0;

}