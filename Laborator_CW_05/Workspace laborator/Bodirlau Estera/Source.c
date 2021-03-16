#include <stdio.h>
#include<stdlib.h>

unsigned char tablou[125];


void SetValue(unsigned char *tablou, short int value)
{
	tablou[value / 8] = tablou[value / 8] | (1 << (value % 8));
}
unsigned char IsValueIntoTable(unsigned char *tablou, short int value)
{
	if ((tablou[value / 8] & (1 << (value % 8))) == (1 << (value % 8))) 

		return 1;
	
	else 
		return 0;
	
}


int main()
{
	const unsigned short Cautam[] = { 121, 423, 88, 89, 874 };
	unsigned char Index;
	SetValue(tablou, 4);
	SetValue(tablou, 7);
	SetValue(tablou, 423);

	for (Index = 0; Index < 5; Index++) {
		if (IsValueIntoTable(tablou, Cautam[Index])) {
			printf("Elementul %d este in Tablou\n", Cautam[Index]);
		}
		else {
			printf("Elementul %d nu este in Tablou\n", Cautam[Index]);
		}
	}

	system("pause");
	return 0;
}