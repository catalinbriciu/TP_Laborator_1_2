#include<stdio.h>
#include<stdlib.h>

void Rest(short int suma)
{

	unsigned short int bancnote[5] = { 100, 50, 10, 5, 1 };
	unsigned short int counter[5] = { 0 };
	unsigned short int i;
	unsigned short int suma_initiala;

	suma_initiala = suma;

	//Algoritm Greedy
	for (i = 0; i < 5; i++)
	{
		if (suma >= bancnote[i])
		{
			counter[i] = suma / bancnote[i];
			suma = suma - counter[i] * bancnote[i];
		}
	}

	//Afisare

	printf("\nRestul pentru suma de %d RON este: \n\n", suma_initiala);
	for (i = 0; i < 5; i++)
	{
		if (counter[i] != 0)
		{
			printf("Bancnotele de %d RON sunt in numar de: %d \n", bancnote[i], counter[i]);
		}
		else
		{
			printf("Bancnotele de %d RON sunt in numar de: 0\n", bancnote[i]);
		}
	}
}

int main()
{
	Rest(237);

	return 0;
}