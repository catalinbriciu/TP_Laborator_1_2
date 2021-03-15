#include<stdio.h>
#include<stdlib.h>

unsigned char Tablou[125];
const unsigned short ElementeDeVerificat[] = { 121, 420, 69, 1, 874 };
void SetValue(unsigned char *Tablou, unsigned short int Value);
unsigned char isValueIntoTable(unsigned char *Tablou, unsigned short int Value);

int main() {
	SetValue(Tablou, 4);
	SetValue(Tablou, 7);
	SetValue(Tablou, 121);
	for (unsigned char Index = 0; Index < 5; Index++) {
		if (isValueIntoTable(Tablou, ElementeDeVerificat[Index])) 
			printf("Elementul %d se afla in Tablou\n", ElementeDeVerificat[Index]);
		else printf("Elementul %d nu se afla in Tablou\n", ElementeDeVerificat[Index]);
		
	}
	system("pause");
	return 0;
}

void SetValue(unsigned char *Tablou, unsigned short int Value) {
	Tablou[Value / 8] = Tablou[Value / 8] | (1 << (Value % 8));
}

unsigned char isValueIntoTable(unsigned char *Tablou, unsigned short int Value) {
	if ((Tablou[Value / 8] & (1 << (Value % 8))) == (1 << (Value % 8))) return 1;
	else return 0;
}