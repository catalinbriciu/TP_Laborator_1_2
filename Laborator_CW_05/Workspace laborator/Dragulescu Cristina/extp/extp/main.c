#include<stdio.h>
#include<stdlib.h>

unsigned char tab[125];
const unsigned short element[] = { 121, 421,79,1,874 };



void SetValue(unsigned char *tab, unsigned short int value)
{
	tab[value / 8] = tab[value / 8] | (1 << (value % 8));
}

unsigned char IsValueIntoTable(unsigned char *tab, unsigned int value)
{
	if ((tab[value / 8]&(1<<(value%8)))==(1<<(value%8)));
}

int main()
{unsigned char i;
	SetValue(tab, 4);
	SetValue(tab, 7);
	SetValue(tab, 121);
	for (i = 0; i < 5; i++)
	{
		if (IsValueIntoTable(tab, element[i]))
			printf("Elementul %d se afla in tablou\n", element[i]);
		else
			printf("elementul %d nu se aflain tablou", element[i]);

	}

	system("pause");
	return 0;
}