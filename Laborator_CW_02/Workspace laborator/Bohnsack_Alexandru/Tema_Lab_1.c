#include <stdio.h>
#include <stdlib.h>


unsigned char CautareLiniara(short int * TablouCautare, short int ElementCautat)
{
	int NumarElemente, contor;
	printf("\nDati numarul de elemente\n");
	scanf("%d", &NumarElemente);
	TablouCautare = (short int*)malloc(NumarElemente * sizeof(short int));
	printf("\nIntroduceti elemente:\n");

	for (contor = 0; contor < NumarElemente; contor++)
		scanf("%d", &TablouCautare[contor]);

		printf("\nIntrodu elementul cautat: ");
		scanf("%d", &ElementCautat);

	for (contor = 0; contor < NumarElemente; contor++)
	{
		if (ElementCautat == TablouCautare[contor])
		{
			printf("\nElementul a fost gasit %d\n\n", contor + 1);
			break;
		}
	}
	if (contor >= NumarElemente)
		printf("\n Elementul nu exista!\n\n");
}


int main()
{
	short int ElementCautat, *TablouCautare;
	CautareLiniara(&TablouCautare, &ElementCautat);
	system("pause");
	return 0;
}