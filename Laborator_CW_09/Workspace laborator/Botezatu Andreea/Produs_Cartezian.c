#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int n, v[MAX], w[MAX]; 
void BK(int k);
void citire();
void afisare(int k);
int solutie(int k);

void main()
{
	citire(); 
	BK(1); 
}

void BK(int k) 
{
	int i;
	for (i = 1; i <= w[k]; i++)
	{
		v[k] = i; 
	 
		if (solutie(k)) 
			afisare(k); 
		else
			BK(k + 1); 
		   
	} 
}

void citire() 
{
	int i;
	printf("Dati numarul de multimi: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("Dati numarul de elemente al multimii %d: ", i);
		scanf("%d", &w[i]);
	}
}

int solutie(int k)
{
	if (k == n) 
		return 1;
	return 0;
}

void afisare(int k) 
{
	int i;
	for (i = 1; i <= k; i++)
		printf("%d", v[i]);
	printf("\n");
}