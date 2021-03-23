#include<stdio.h>
#include<stdlib.h>

unsigned char Tab[125];
const unsigned short Elemente_Pentru_Verificare[] = { 190, 11, 8, 21, 999, 422, 105 };

void SetValue(unsigned char *Tablou, unsigned short int Valoare);
unsigned char isValueIntoTable(unsigned char *Tablou, unsigned short int Vaoare);

void SetValue(unsigned char *Tablou, unsigned short int Valoare)
{
	Tablou[Valoare / 8] = Tablou[Valoare / 8] | (1 << (Valoare % 8));
}

unsigned char isValueIntoTable(unsigned char *Tab, unsigned short int Valoare)
{

	if ((Tab[Valoare / 8] & (1 << (Valoare % 8))) == (1 << (Valoare % 8)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main() 
{

	SetValue(Tab, 4);
	SetValue(Tab, 422);
	SetValue(Tab, 190);

	for (unsigned char Index = 0; Index < 5; Index++) 
	{
		if (isValueIntoTable(Tab, Elemente_Pentru_Verificare[Index])) 
		{
			printf("Elementul %hu se afla in Tablou\n", Elemente_Pentru_Verificare[Index]);
		}
		else 
		{
			printf("Elementul %hu nu se afla in Tablou\n", Elemente_Pentru_Verificare[Index]);
		}
	}
}
