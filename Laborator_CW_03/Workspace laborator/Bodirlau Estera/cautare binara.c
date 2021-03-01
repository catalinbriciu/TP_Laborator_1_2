#include<stdlib.h>
#include<stdio.h>
int cautare(int NumarElemente, int ElementCautat, int TablouCautare[])
{
	int li = 1, lf = NumarElemente, Pivot;

	while (li <= lf)
	{
		Pivot = (li + lf) / 2;
		if (TablouCautare[Pivot] == ElementCautat)
			return 1;
		else
		{
			if (TablouCautare[Pivot] < ElementCautat)
				lf = Pivot - 1;
			else
				li = Pivot + 1;
		}
	}
	return 0;

}
int main()
{
	int TablouCautare[100], NumarElemente, ElementCautat, Index, k=0, aux;
	printf("Dati numarul de elemente al multimii: ");
	scanf("%d", &NumarElemente);
	printf("Dati numarul pe care il cautati: ");
	scanf("%d", &ElementCautat);
	for (Index = 0; Index < NumarElemente; Index++)
	{
		printf("TablouaCautare[%d]= ", Index);
		scanf("%d", &TablouCautare[Index]);
	}
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
		printf("%d  ", TablouCautare[Index]);
	}
	printf("%d \n", cautare(NumarElemente, ElementCautat, TablouCautare));
	system("pause");
	return 0;
}
