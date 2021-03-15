#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

unsigned char Tablou[125];


void SetValue(unsigned char *Tab, unsigned short int Value) 
{
	Tab[Value / 8] = Tablou[Value / 8] | (1 << (Value % 8));
}

unsigned char isValueIntoTable(unsigned char *Tab, unsigned short int Value);

unsigned char isValueIntoTable(unsigned char *Tab, unsigned short int Value)
{
	if ((Tablou[Value / 8] & (1 << (Value % 8))) == (1 << (Value % 8))) 
	{
		return 1;
	}
	else {
		return 0;
	}
}

int main() 
{

    SetValue(Tablou, 4);
    SetValue(Tablou, 7);
    SetValue(Tablou, 121);
    int ElementeDeVerificat[] = { 121, 423, 88, 89, 874 };

    for(unsigned char Index = 0; Index < 5; Index++) 
	{
        if(isValueIntoTable(Tablou, ElementeDeVerificat[Index])) 
		{
            printf("True valoarea se afla in Tablou\n", ElementeDeVerificat[Index]);
        } else {
            printf("False valoarea nu se afla in Tablou\n", ElementeDeVerificat[Index]);
        }
    }
    system("pause");
    return 0;
}

