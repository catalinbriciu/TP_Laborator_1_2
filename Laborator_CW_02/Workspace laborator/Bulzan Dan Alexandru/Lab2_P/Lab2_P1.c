#include <stdio.h>
#include <stdlib.h>

unsigned char CautareLiniara(short int *TablouCautare, short int ElementCautat)
{
	int contor, NumaruldeElemente;
	printf("\nIntroduceti numarul de elemente:\n");
	scanf("%d", &NumaruldeElemente);
	TablouCautare = (short int *)malloc(NumaruldeElemente * sizeof(short int));
	printf("\nIntroduceti elemntele: \n");
	for (contor = 0; contor < NumaruldeElemente; contor++)
		scanf("%d", &TablouCautare[contor]);
	printf("\nIntrodu elementul cautat: ");
	scanf("%d", &ElementCautat);
	for (contor = 0; contor < NumaruldeElemente; contor++)
		if (ElementCautat == TablouCautare[contor])
		{
			printf("\nElementul a fost gasit %d", contor + 1);
			break;
		}
	if (contor >= NumaruldeElemente)
		printf("\n Elementul nu exista.");

}
int main()
{
	short int ElementCautat;
	short int *TablouCautare;
	CautareLiniara(&TablouCautare, &ElementCautat);
	system("pause");
	return 0;
}