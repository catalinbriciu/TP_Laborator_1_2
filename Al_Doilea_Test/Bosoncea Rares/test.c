#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char v[20], a[20];
int Valid(int k)
{
	int i;
	for (i = 0; i < k; i++)
	{
		if (v[i] == v[k])
			return 0;
		if (i % 2 == 0)
			if (!strchr("aeiou", v[i]))
				return 0;
	}
	if (k % 2 == 0)
		if (!strchr("aeiou", v[k]))
			return 0;
	return 1;
}
int solutie(int k)
{
	if (k == strlen(v) - 1)
		return 1;
	return 0;
}
void afisare(int k)
{
	int i;
	for (i = 0; i <= k; i++)
		printf("%c", v[i]);
}
void BK(int k)
{
	int i;
	for (i = 0; i < strlen(v); i++)
	{
		v[k] = a[i];
		if (Valid(k) == 1)
		{
			if (solutie(k) == 1)
				afisare(k);
			else
				BK(k + 1);
		}
	}
}
int main()
{
	printf("Scrieti sirul: ");
	scanf("%s", a);
	BK(0);
	system("pause");
	return 0;
}