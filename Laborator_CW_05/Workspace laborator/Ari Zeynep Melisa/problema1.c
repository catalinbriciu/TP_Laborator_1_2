#include<stdlib.h>
#include<stdio.h>

void SetValue(unsigned char *tab, short int value) 
{
	tab[value / 8] = tab[value / 8] | (1 << (value % 8));
}

unsigned char IsValueIntoTable(unsigned char *tab, short int value) 
{
	if ((tab[value / 8] & (1 << (value % 8))) == (1 << (value % 8)))
		return 1;
	else
		return 0;
}

int main()
{
	unsigned char tabela[125], i;
	SetValue(tabela[0], 4);
	SetValue(tabela[0], 7);
	SetValue(tabela[0], 15);
	SetValue(tabela[0], 23);
	if (IsValueIntoTable(tabela[0], 7))
		printf("Elementul se afla in tablou!\n");
	if (IsValueIntoTable(tabela[0], 56))
		printf("Elementul nu se afla in tablou!\n");

	system("pause");
	return 0;

}