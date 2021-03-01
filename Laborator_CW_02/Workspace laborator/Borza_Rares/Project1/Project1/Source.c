#include<stdlib.h>
#include<stdio.h>

unsigned char CautareBinara(short int *TablouCautare, unsigned char NumarElementeTablou, short int ElementCautat)
{
	unsigned char pozitie, li = 0, ls = NumarElementeTablou - 1, gasit = 0, pivot;
	while (li <= ls && !gasit) {
		pivot = (li + ls) / 2;
		if (TablouCautare[pivot] == ElementCautat) gasit = 1;
		else if (ElementCautat < TablouCautare[pivot]) ls = pivot - 1;
		else li = pivot + 1;
	}
	if (gasit == 0) return 0;
	else return 1;

}

int main()
{
	short int TablouCautare[40], ElementCautat;
	unsigned char pozitie, NumarElementeTablou;
	printf("Dati numarul de elemente al tabloului: ");
	scanf("%d", &NumarElementeTablou);
	printf("Dati elementele tabloului: ");
	for (pozitie = 0; pozitie < NumarElementeTablou; pozitie++) scanf("%d", &TablouCautare[pozitie]);
	printf("Dati elementul de cautat: ");
	scanf("%d", &ElementCautat);
	if (CautareBinara(TablouCautare, NumarElementeTablou, ElementCautat) == 1) printf("Elementul a fost gasit!/n");
	else printf("Elementul nu a fost gasit!/n");
	system("pause");
	return 0;
}