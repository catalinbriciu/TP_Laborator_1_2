#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
char v[20], st[20], p[20];
int validare()
{
	int i;
	for (i = 1; i <= n; i++)
		if (strchr("aeiou", v[st[i] - 1]) == 0 && i % 2 == 0)
			return 0;
	return 1;
}
void scrie()
{
	int i;
	for (i = 1; i <= n; i++)
		printf("%c ", v[st[i] - 1]);
	printf("\n");

}
void back(int k)
{
	int i;
	for (i = 1; i <= n; i++)
		if (!p[i])
		{
			st[k] = i;
			p[i] = 1;
			if (k == n && validare())
				scrie();
			else 
				back(k + 1);
			p[i] = 0;
		}
}
int main()
{
	int i, j;
	char aux;
	scanf("%s", v);
	n = strlen(v);
	if (n < 4)
	{
		printf("Lungimea minima a unui cuvant trebuie sa fie 4!\n");
		return 0;
	}
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	back(1);
	return 0;
}