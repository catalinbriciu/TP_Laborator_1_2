#include<stdio.h>
#include<stdlib.h>

unsigned char Table[100];
const unsigned short ElementsToVerify [] = { 120,8,97,12,34 };

void SetValue(unsigned char *Table, unsigned short int Value) {
	Table[Value / 8] = Table[Value / 8] | (1 << (Value % 8));
}

unsigned char isValueInTable(unsigned char *Table, unsigned short int Value) {
	if ((Table[Value / 8] & (1 << (Value % 8))) == (1 << (Value % 8))) return 1;
	else return 0;
}

int main()
{
	unsigned char Index;
	SetValue(Table, 2);
	SetValue(Table, 5);
	SetValue(Table, 8);
	for (Index = 0; Index < 5; Index++) {
		if (isValueInTable(Table, ElementsToVerify[Index]))
			printf("Elementul %d se afla in tablou\n", ElementsToVerify[Index]);
		else printf("Elementul %d nu se afla in tablou\n", ElementsToVerify[Index]);
	}
	system("pause");
	return 0;
}