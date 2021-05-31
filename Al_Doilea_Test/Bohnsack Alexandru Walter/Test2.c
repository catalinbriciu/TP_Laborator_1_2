//Par
/*
Se da o suma de bani S citita de la tastatura maxim 60000. Se citeste de la tastatura un numar n < 10.Sa se plateasca suma de bani citita de la tastatura, folosind un numar maxim de monede cu bancnote cavaloarea o putere a lui 2 (maxim valoare = 2^n). Sa se rezolve aceeasi probleme avand un numar minim de monede.
Complexitatea algoritmului nu trebuie sa fie mai mare de O(nlogn).
*/

//ignoram eroarea 4996
#pragma warning(disable:4996)

//bibliotecile
#include<stdio.h>
#include<stdlib.h>

//declaram global Suma de bani citita si un numar n
int Suma, n;

int Pow(int n, int max)
{
	int puterea = 1, k = 0;
	max = 1 << max;
	while (puterea < n)
	{
		puterea = puterea << 1;
		if (puterea >= max)
		{
			return max;
		}
		k++;
	}
	return puterea >> 1;
}


void SolutiaNumarMinim(int Suma, int n)
{
	int puterea = Pow(Suma, n), k = 0;
	
	while (Suma && puterea) 
	{
		if (puterea <= Suma)
		{
			printf("%d ", puterea);
			k++;
			Suma = Suma - puterea;
		}
		else
			puterea >>= 1;
	}
	printf("\n Numarul minim este = %d\n", k);
}




void main()
{
	int Suma, n;
	printf("Introduceti suma (maxim 60000): ");
	scanf("%d", &Suma);
	printf("\nIntroduceti n (maxim 10): ");
	scanf("%d", &n);
	printf("\n");

	SolutiaNumarMinim(Suma, n);

	printf("\n");
	system("pause");
}