#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char *a, char*b)
{
	char aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int check(char *sirdeCaractere)
{
	int i, n = strlen(sirdeCaractere) - 1;
	char vocale[] = { "aeiou" };
	//pozitiile 2 si 4 trebuie sa contina vocale
	if (!strchr(vocale, *(sirdeCaractere + 1)))
	{
		return 0;
	}
	if (!strchr(vocale, *(sirdeCaractere + 2)))
	{
		return 0;
	}
	return 1;
}

void permutari(char *sirdeCaractere, int stanga, int dreapta)
{
	int i;
	if (stanga == dreapta && check(sirdeCaractere) == 1)
		printf("%s\n", sirdeCaractere);
	else {
		for (i = stanga; i <= dreapta; i++) {
			swap((sirdeCaractere + stanga), (sirdeCaractere + i));
			permutari(sirdeCaractere, stanga + 1, dreapta);
			swap((sirdeCaractere + stanga), (sirdeCaractere + i));//backtrack to print rest of permutations
		}
	}
}
void main()
{
	char *sirdeCaractere = (char*)malloc(21 * sizeof(char));
	int n;
	scanf("%s", sirdeCaractere);
	n = strlen(sirdeCaractere);

	permutari(sirdeCaractere, 0, n - 1);
	return;
}