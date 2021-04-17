#include <stdio.h> 
#include <stdlib.h>


int n, v[20], sol;
int valid(int k);
int solutie(int k);
void afisare();
void BK(int k);

void main()
{
	printf("Dati n:");
	scanf("%d", &n);
	BK(1);
}

void BK(int k)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		v[k] = i;
		if (valid(k) == 1)
		{
			if (solutie(k) == 1)
				afisare();
			else
				BK(k + 1);
		}
	}
}

int valid(int k)
{
	int i;
	for (i = 1; i <= k - 1; i++)
		if ((v[i] == v[k]) || (abs(v[k] - v[i]) == (k - i)))
			return 0;
	return 1;
}

int solutie(int k)
{
	if (k == n)
		return 1;
	return 0;
}

void afisare()
{
	int i, j, x;
	sol++;
	printf("\nSolutia este: %d\n", sol);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			if (v[i] == j) printf(" D ");
			else printf(" _ ");
		printf("\n");
	}
}