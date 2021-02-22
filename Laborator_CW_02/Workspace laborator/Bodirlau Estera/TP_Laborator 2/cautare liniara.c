#include<stdlib.h>
#include<stdio.h>

int cautare(int x, int n, int A[])
{
	int i = 1;

	while ((i < n) && (x != A[i]))
		i = i + 1;
	if (x == A[i])
		return i;
	else
		return 0;
}
int main()
{
	int x, n, A[100], i;
	printf("Dati numarul de elemente al multimii: ");
	scanf("%d ", &n);
	printf("Dati numarul pe care il cautati: ");
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		printf("A[%d]= ", i);
		scanf("%d", &A[i]);
	}
	printf("%d \n", cautare(x, n, A));
	system("pause");
	return 0;
}