#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void SetValue(unsigned char*Tablou, short int value) {

	short int byte, bit;
	byte = value / 8;
	bit = value % 8;

	Tablou[byte] = Tablou[byte] | (1u << bit);

}

unsigned char isValueIntoTable(unsigned char*Tablou, short int value) {

	short int byte, bit;
	byte = value / 8;
	bit = value % 8;
	int x = (1 & (Tablou[byte] >> bit));
	if (x==1)return 1;



	return 0;
}

int main(void) {

	unsigned char Tablou[125] = { 0 };
	short int value;

	printf("\n Dati valoarea pe care doriti sa o puneti in tablou: ");
	scanf("%hd", &value);
	SetValue(&Tablou[0], value);
	if (isValueIntoTable(&Tablou[0], value) == 1)printf("\n A fost introdusa in vectorul de biti\n");



	system("pause");
}