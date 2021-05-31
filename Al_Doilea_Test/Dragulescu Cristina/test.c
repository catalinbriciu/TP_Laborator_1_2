//Se da o suma de bani S citita de la tastatura maxim 60000. Se citeste de la tastatura un numar n < 10. Sa se plateasca suma de bani citita de la tastatura
//, folosind un numar maxim de monede cu bancnote ca
//	valoarea o putere a lui 2 (maxim valoare = 2 ^ n).Sa se rezolve aceeasi probleme avand un numar minim de monede.Complexitatea
//algoritmului nu trebuie sa fie mai mare de O(nlogn).


#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
	int suma, n, minim = 0, k = 0, i, val;
	printf("Dati suma de bani mai mica decat 60000:");
	scanf("%d", &suma);
	printf("Dati n:");
	scanf("%d", &n);
	for (i = n; i >= 0; i--)
	{
		val = pow(2, i);
		while ((suma - val) >= 0) {
			k++;
			suma = suma - val;
		}
		if (k > 0) printf("%d bancnote de %d\n", k, val);
		minim = minim + k;
		k = 0;
	}
	printf("Numarul minim de bancnote: %d\n", minim);
	system("pause");
	return 0;

}