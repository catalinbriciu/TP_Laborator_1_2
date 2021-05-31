#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i, Nr, Baza = 2, Putere, k = 0;
	//unsigned int Nr;
	printf("Nr = ");
	scanf("%d", &Nr);
	do {
		printf("Putere = ");
		scanf("%d", &Putere);
	} while (Putere >= 10);
	int x = Nr / 2;
	if (Nr % 2 == 0) printf("Numarul maxim de bancnote != 1 este %d\n", x);
	else printf("Numatul maxim de bancnote != 1 este %d\n", x + 1);

	int Nr_minim = 0;
	for (i = Putere; i >= 0; i--)
	{
		int val = pow(Baza, i);
		while ((Nr - val) >= 0) {
			k++;
			Nr = Nr - val;
		}
		if (k > 0) printf("%d bancnote de %d\n", k, val);
		Nr_minim = Nr_minim + k;
		k = 0;
	}
	printf("Numarul minim de bancnote: %d\n", Nr_minim);
	system("pause");
	return 0;
}
 
