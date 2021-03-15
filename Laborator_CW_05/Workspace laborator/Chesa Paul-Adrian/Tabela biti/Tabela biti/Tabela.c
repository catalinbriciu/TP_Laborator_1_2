#include<stdio.h>
#include<stdlib.h>

void SetValue(unsigned char *tab, short int value)
{
	for (int i = 0; i <= 125; i++)
		tab[i] = value;
}

unsigned char IsValueInTabel(unsigned char *tab, short int value)
{
	for (int i = 0; i <= 125; i++)
		if (tab[i] == value)
			return value;
		else
			return 0;
		

}

unsigned char tab[125];

int main()
{
	SetValue(&tab[0], 5);
	IsValueInTabel(&tab[0], 4);
	printf("Ati introdus numarul %hi cu succes !\n", IsValueInTabel(&tab[0],4));

	system("pause");
	return 0;
}
