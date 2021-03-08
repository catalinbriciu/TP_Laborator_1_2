#include<stdlib.h>
#include<stdio.h>

void citire(unsigned short int *TablouCautare, unsigned char *NumarElemente, unsigned short int *ElementCautat)
{
	unsigned short int Index;
	printf("Dati numarul de elemente al multimii: ");
	scanf("%hhu", NumarElemente);
	printf("Dati numarul pe care il cautati: ");
	scanf("%hu", ElementCautat);
	for (Index = 0; Index < *NumarElemente; Index++)
	{
		printf("TablouaCautare[%hu]= ", Index);
		scanf("%hu", &TablouCautare[Index]);
	}
}
unsigned char cautare(unsigned char NumarElemente, unsigned short int ElementCautat, unsigned short int *TablouCautare)
{
	unsigned short int li = 0, lf = NumarElemente - 1;
	unsigned char Pivot;
	while (li <= lf)
	{
		Pivot = (li + lf) / 2;
		if (TablouCautare[Pivot] == ElementCautat)
			return Pivot;
		else
		{
			if (TablouCautare[Pivot] < ElementCautat)
				li = Pivot + 1;
			else
				lf = Pivot - 1;
		}
	}
	return 255;

}
int main()
{
	unsigned short int TablouCautare[100],  ElementCautat, Index, k = 0, aux;
	unsigned char NumarElemente;
	citire(TablouCautare, &NumarElemente, &ElementCautat);
	while (k == 0)
	{
		k = 1;
		for (Index = 0; Index < NumarElemente; Index++)
		{
			if (TablouCautare[Index] > TablouCautare[Index + 1]) {
				aux = TablouCautare[Index];
				TablouCautare[Index] = TablouCautare[Index + 1];
				TablouCautare[Index + 1] = aux;
				k = 0;
			}
		}
	}
	for (Index = 0; Index < NumarElemente; Index++)
	{
		printf("%hhu  ", TablouCautare[Index]);
	}
	printf("%hhu\n", cautare(NumarElemente, ElementCautat, TablouCautare));
	system("pause");
	return 0;
}
