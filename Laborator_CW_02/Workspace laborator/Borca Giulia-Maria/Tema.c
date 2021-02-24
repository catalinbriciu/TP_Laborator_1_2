#include <stdio.h>
#include <stdlib.h>
unsigned char CautareLiniara(short int * TablouCautare, short int ElementCautat)
{
	int NumarElemente, contor;
	printf("Dati numarul de elemente:");
	scanf("%d", &NumarElemente);
	TablouCautare = (short int*)malloc(NumarElemente * sizeof(short int)); 
	printf("Introduceti elementele:");
	for (contor = 0; contor < NumarElemente; contor++) 
		scanf("%d", &TablouCautare[contor]);
	printf("Introduceti elementul cautat:"); 
	scanf("%d", &ElementCautat);
	for (contor = 0; contor < NumarElemente; contor++)
	{
		if (ElementCautat == TablouCautare[contor])
		{
			printf("Elementul a fost gasit %d\n", contor + 1); 
			break;
		}
	}
	if (contor >= NumarElemente)
		printf("0\n"); 
}
int main()
{
	short int ElementCautat, *TablouCautare;
	CautareLiniara(&TablouCautare, &ElementCautat); 
	system("pause");
	return 0;
}