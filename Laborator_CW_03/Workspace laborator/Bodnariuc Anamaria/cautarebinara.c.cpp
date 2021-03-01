#include <stdio.h>
#include <stdlib.h>

unsigned char CautareBinara(short int TabloudeCautare[], short int maxim, short int ElementCautat)
{

	int inferior = 0, superior = maxim - 1, mijloc;
	while (inferior <= superior)
	{
		mijloc = (inferior + superior) / 2;
		if (ElementCautat > TabloudeCautare[mijloc])
			inferior = mijloc + 1;
		else if (ElementCautat < TabloudeCautare[mijloc])
			superior = mijloc - 1;
		else
			return mijloc;
	}
	return -1;
}

int main()
{
	short int contor, ElementCautat, limita, TabloudeCautare[50], pozitie;
	printf("Introduceti limita elementelor in TabloudeCautare:\t");
	scanf("%d", &limita);
	printf("introduceti %d elementele in TabloudeCautare: \n", limita);
	for (contor = 0; contor < limita; contor++)
	{
		scanf("%d", &TabloudeCautare[contor]);
	}
	printf("Introdu elementul cautat:\t");
	scanf("%d", &ElementCautat);
	pozitie = CautareBinara(TabloudeCautare, limita, ElementCautat);
	if (pozitie == -1)
	{
		printf("Elementul %d nu a fost gasit\n", ElementCautat);
	}
	else
	{
		printf("Elementul %d a fost gasit in pozitia %d\n", ElementCautat, pozitie + 1);
	}
	return 0;
}