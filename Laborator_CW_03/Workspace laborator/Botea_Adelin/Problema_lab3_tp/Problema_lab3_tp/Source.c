#include <stdio.h>
#include <stdlib.h>
unsigned char CautareLiniara(short int *TablouCautare, unsigned char NumarElementeTablou, short int ElementCautat)
{
	unsigned char index;
	int li, ls, k;
	ls = NumarElementeTablou;
	li = 1;
	while (li <= ls)
	{
		k = (li + ls) / 2;
		if (ElementCautat == TablouCautare[k])
			return k+1;
		else
			if (ElementCautat < TablouCautare[k])
				ls = k - 1;
			else li = k + 1;
	}
	return 0;
}
int main()
{
	short int TablouCautare[1000], ElementCautat;
	unsigned char NumarElementeTablou, index;
	printf("Introduceti numarul cautat:");
	scanf("%d", &ElementCautat);
	printf("Introduceti numarul de elemente al listei:");
	scanf("%d", &NumarElementeTablou);
	for (index = 0; index < NumarElementeTablou; index++)
	{
		printf("TablouCautare[%d]=", index);
		scanf("%d", &TablouCautare[index]);
	}
	printf("%d\n", CautareLiniara(TablouCautare, NumarElementeTablou, ElementCautat));
	system("pause");
	return 0;
}