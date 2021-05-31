#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char cuvant[20];
int n, v[20];

int valid(int k);
int solutie(int k);
void afisare(int k);
void BK(int k);


int main()
{
	int i;
	printf("Cuvantul este: ");
	scanf("%s", cuvant);
	/*printf("Dati lungimea sirului (minim 4): ");
	scanf("%d", &n);
	printf("Dati cuvantul: ");
	for (i = 0; i < n; i++)
		scanf("%c", &cuvant[i]);*/
		//printf("%d", strlen(cuvant));

	BK(0);
	system("pause");
	return 0;
}
void BK(int k)
{
	int i;
	for (i = 0; i < strlen(cuvant); i++) //strlen(cuvant)
	{
		v[k] = cuvant[i];
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
	for (i = 0; i < k; i++)
		if (i % 2 == 0 && strchr("aeiou", v[i]) == NULL) //v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o'||v[i]=='u'
			if (v[i] == v[k])
				return 0;
	return 1;
}
int solutie(int k)
{
	if (k == strlen(cuvant)) //strlen(cuvant)
		return 1;
	return 0;
}
void afisare(int k)
{
	int i;
	for (i = 0; i < strlen(cuvant); i++) //strlen(cuvant)
		printf("%c", v[i]);
	printf("\n");
}
