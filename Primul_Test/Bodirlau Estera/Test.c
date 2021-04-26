#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


unsigned __int8 Stiva[255];
unsigned __int8 VarfStiva;
unsigned __int32 Number;
void ReadInput(unsigned __int32 *Value);

int main() {
	ReadInput(&Number);
	system("pause");
	return 0;
}

unsigned char Pop(unsigned char * Stiva, unsigned char *VarfStiva)
{
	if ((*VarfStiva) > 0)
		return Stiva[(*VarfStiva)--];
	else
		return -1;
}

void Push(unsigned char* Stiva, unsigned char * VarfStiva, unsigned char Value)
{
	
	
		Stiva[++(*VarfStiva)] = Value
	
}

void ReadInput(unsigned __int32 *Value) {
	if (scanf("%u", Value)) {}
	else {}
}

//e)
unsigned char NumarareBiti(unsigned char Number) {
	unsigned char NumarareDe1 = 0;
	for (unsigned char Index = 0; Index < 8; Index++) {
		if (Number & (1 << Index)) {
			NumarareDe1++;
		}
	}
	return NumarareDe1;
}
