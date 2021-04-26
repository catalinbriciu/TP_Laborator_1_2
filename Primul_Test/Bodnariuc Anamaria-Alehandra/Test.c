#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int isStackEmpty()
{
	if (poz_element == 0)
		return 1;
	else
		return 0;
}

int isStackFull()
{
	if (poz_element == max)
		return 1;
	else
		return 0;
}

void IntroducereinStack(unsigned char *stack) //introduc elemente in stiva
{
	unsigned char poz_element = 0; //definesc pozitia elementului
	printf("Dati 7 numere: "); //introduc de la tastatura 7 elemente
	while (poz_element != 7)  //folosesc while pentru a verifica numarul de elemente introduse
	{
		scanf("%d", &stack[k]);
		poz_element++;
	}
}

void main()
{
	unsigned char optiune, stack[10];
	do {
		printf("\n0.Iesire\n");
		printf("1.\n");
		printf("2.\n");
		printf("3.\n");
		printf("Optiunea dvs este: ");
		scanf("%d", &optiune);
		switch (optiune)
		{
		case 0:exit(0);
			break;
		case 1: IntroducereinStack(stack);
			break;
		case 2:
			break;
		case 3:
			break;
		}
	} while (1);
	system("pause");
}