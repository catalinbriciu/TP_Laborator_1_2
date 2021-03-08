#include <stdio.h>
#include <stdlib.h>
unsigned char CautareLiniara(short int *TablouCautare, unsigned char NumarElementeTablou, short int ElementCautat)
{
	unsigned char index;
	for (index = 0; index < NumarElementeTablou; index++)
		if (TablouCautare[index] == ElementCautat)
			return index + 1;
	return 0;
}
int main()
{
	short int TablouCautare[1000], ElementCautat;
	short int NumarElementeTablou, index;
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