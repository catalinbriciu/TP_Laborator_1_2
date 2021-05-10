#include<stdio.h>
#include<stdlib.h>

int n, v[250];

int valid(int k)
{
	int i;
	for (i = 1; i < k; i++)
		if (v[i] == v[k])
			return 0;
	return 1;
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
		printf("%d ", &v[i]);
	printf("\n");
}

void BK(int k)
{
	int i;
	for (i = 1; i <= n; i++)
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

int main()
{
	scanf("%d", &n);
	BK(1);
	system("cls");
	return 0;
}