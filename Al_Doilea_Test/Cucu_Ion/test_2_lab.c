#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int n;
char cuv[10], stiva[10], pozitie[10];
int valid() {
	int i;
	for (i = 1; i <= n; i++)
		if (strchr("aeiou", cuv[stiva[i] - 1]) == 0 && i % 2 == 0)
			return 0;
	return 1;
}
void scrie() {
	int i;
	for (i = 1; i <= n; i++)
		printf("%c ", cuv[stiva[i] - 1]);
	printf("\n");

}
void back(int k)
{
	int i;
	for (i = 1; i <= n; i++)
		if (!pozitie[i]) {
			stiva[k] = i;
			pozitie[i] = 1;
			if (k == n && valid())
				scrie();
			else
				back(k + 1);
			pozitie[i] = 0;
		}
}
int main()
{
	int i, j;
	char aux;
	printf("Dati un cuvint > 4 \n");
	scanf("%s", cuv);
	n = strlen(cuv);
	if (n < 4) {
		printf("Lungimea cuvintului > 4!\n");
		return 0;
	}
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (cuv[i] > cuv[j]) {
				aux = cuv[i];
				cuv[i] = cuv[j];
				cuv[j] = aux;
			}
	back(1);
	system("pause");
	return 0;
}