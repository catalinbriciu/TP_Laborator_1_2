#include<stdio.h>
#include<stdlib.h>


int n, v[20],p; //n=nr de elemente, aranjamente de n luate cate p
int valid(int k);
int solutie(int k);
void afisare(int k);
void BK(int k);

int main()
{
	printf("Dati numar:");
	scanf("%d", &n);
	printf("Dati p:");
	scanf("%d", &p);
	if (!(p <= n))
		printf("p trebuie sa fie mai mic sau egal ca n");
	else
	BK(1);
	system("pause");
	return 0;
}

void BK(int k)
{
	int i;

	for (i = 1; i <= n; i++) //parcurgem elementele mulţimii Sk
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
int valid(int k) //verificam conditiile de continuare
{
	int i;
	for (i = 1; i <= k - 1; i++)
		if (v[i] == v[k])
			return 0;
	return 1;
}
int solutie(int k) //verificam daca am obtinut o solutie
{
	if (k == p) // am obţinut o aranjare, dacă am reuşit să depunem în vector p elemente
		return 1;
	return 0;
}

void afisare(int k)
{
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ", v[i]);
	printf("\n");

}