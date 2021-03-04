#include<stdlib.h>
#include<stdio.h>
int cautare(int NumarElemente, int ElementCautat, int TablouCautare[])
{
	int Lim_Inferioara = 1, Lim_Superioara = NumarElemente, pivot;

	while (Lim_Inferioara <= Lim_Superioara){
		
		pivot = (Lim_Inferioara + Lim_Superioara) / 2;
		if (TablouCautare[pivot] == ElementCautat)
			return 1;
		else
		{
			if (TablouCautare[pivot] < ElementCautat)
				Lim_Superioara = pivot - 1;
			else
				Lim_Inferioara = pivot + 1;
		}
	}
	return 0;

}
int main()
{
	int TabCautare[100], NrElemente, ElemCautat, Index, k = 0, aux;
	printf("Dati numarul de elemente al multimii: ");
	scanf("%d", &NrElemente);
	printf("Dati numarul pe care il cautati: ");
	scanf("%d", &ElemCautat);
	for (Index = 0; Index < NrElemente; Index++)
	{
		printf("TablouCautare[%d]= ", Index);
		scanf("%d", &TabCautare[Index]);
	}
	while (k == 0)
	{
		k = 1;
		for (Index = 0; Index < NrElemente; Index++){
			if (TabCautare[Index] > TabCautare[Index + 1]) {
				aux = TabCautare[Index];
				TabCautare[Index] = TabCautare[Index + 1];
				TabCautare[Index + 1] = aux;
				k = 0;
			}
		}
	}
	for (Index = 0; Index < NrElemente; Index++){
		printf("%d  ", TabCautare[Index]);
	}
	printf("%d \n", cautare(NrElemente, ElemCautat, TabCautare));
	system("pause");
	return 0;
}
