#include<stdlib.h>
#include<stdio.h>
#define MAX 20
int n, v[MAX], p;
int valid(int k);
int solutie(int k);
void afisare(int k);
void BK(int k);


void BK(int k)
{
	int i;
	for (i = v[k-1]+1; i <= n; i++)
	{
		v[k] = i;
		if (valid(k))
		{
			if (solutie(k))
				afisare(k);
			else
				BK(k + 1);
		}
	}
}
int valid(int k)
{
	int i;
	for (i = 1; i <= k - 1; i++)
		if (v[i] == v[k])
			return 0;
	return 1;
}
int solutie(int k)
{
	if (k == p)
		return 1;
	return 0;
}
void afisare(int k)
{
	for (int i = 1; i <= k; i++)
		printf("%d", v[i]);
	printf("\n");
}
int main()
{
	printf("Dati numarul de elemente: ");
	scanf("%d", &n);
	printf("Dati numarul de elemente ale unei submultimi: ");
	scanf("%d", &p);
	BK(1);
	system("pause");
	return 0;
}
