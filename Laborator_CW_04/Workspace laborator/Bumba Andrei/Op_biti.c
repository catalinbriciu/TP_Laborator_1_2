#include<stdio.h>
#include<stdlib.h>
unsigned short SetFlag(short int number, unsigned char position)
{
	number = number | (1 << position);
	return number;
}
unsigned short ClearFlag(short int number, unsigned char position)
{
	number = number & ~(1 << position);
	return number;
}
unsigned short ChangeFlag(short int number, unsigned char position)
{
	number = number ^ (1 << position);
	return number;
}
int main()
{
	int numar, pozitie;
	printf("Introduceti numar: ");
	scanf("%d", &numar);
	printf("Introduceti pozitie: ");
	scanf("%d", &pozitie);
	printf("SetFlag: %hu",SetFlag(numar,pozitie));
	printf("\nClearFlag: %hu", ClearFlag(numar, pozitie));
	printf("\nChangeFlag: %hu\n", ChangeFlag(numar, pozitie));
}