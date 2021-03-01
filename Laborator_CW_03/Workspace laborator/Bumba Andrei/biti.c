#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numar, cnt, aux, biti_de_1 = 0;
	printf("Introduceti un numar: ");
	scanf("%d", &numar);
	for (cnt = 31; cnt >= 0; cnt--)
	{
		aux = (numar >> cnt) & 1;
		if (aux)
			biti_de_1++;
	}
	printf("Numarul %d are %d biti de 1.", numar, biti_de_1);
}