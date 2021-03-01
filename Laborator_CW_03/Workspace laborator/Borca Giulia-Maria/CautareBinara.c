#include <stdio.h>
#include <stdlib.h>
unsigned char CautareBinara(short int * TablouCautare, short int ElementCautat)
{
	int NumarElemente, contor, li, ls, k;
	printf("Dati numarul de elemente:");
	scanf("%d", &NumarElemente);
	TablouCautare = (int*)malloc(NumarElemente * sizeof(int));
	printf("Introduceti elementele:");
	for (contor = 0; contor < NumarElemente; contor++)
		scanf("%d", &TablouCautare[contor]);
	printf("Introduceti elementul cautat:");
	scanf("%d", &ElementCautat);
	li = 0;
	ls = NumarElemente-1;
	while (li <= ls)
	{
		k = (li + ls) / 2;
			if (NumarElemente <TablouCautare[k])
				ls = k - 1;
			else
				if (NumarElemente > TablouCautare[k])
					li = k + 1;
				else
					printf("Numarul cautat se afla pe pozitia:%d", &k);
	}
	
}
int main()
{
	short int ElementCautat, *TablouCautare;
	CautareBinara(&TablouCautare, &ElementCautat);
	system("pause");
	return 0;
}