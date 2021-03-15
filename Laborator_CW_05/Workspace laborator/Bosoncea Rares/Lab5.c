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
	unsigned char tabela[125] = {0};
	short int value;
	printf("Introduceti valoarea");
	scanf("%d", &value);
	SetValue(&tabela, value);
	SetValue(&tabela, value);
	system("pause");
	return 0;
}