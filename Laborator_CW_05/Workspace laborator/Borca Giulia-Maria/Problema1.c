#include<stdlib.h>
#include<stdio.h>

void SetValue(unsigned char *tab, short int value)
{
	int i;
	for (i = 0; i <= 125; i++)
	{
		printf("&d", &value);
		tab[i] = value;
	}
}

unsigned char IsValueIntoTable(unsigned char *tab, short int value)
{
	return "TRUE";
	return "FALSE";
}

int main()
{
	unsigned char tabela[125] = { 0 };
	SetValue(&tabela[0], 4);
	SetValue(&tabela[0], 7);
}