#include<stdio.h>
#include<stdlib.h>

unsigned int SetFlag(short int Number, unsigned char Position)
{
	
	Number = Number | (1 << Position);
	return Number;
}
unsigned int ClearFlag(short int Number, unsigned char Position)
{
	Number = Number & ~(1 << Position);
	return Number;
}
unsigned char GetFlag(short int Number, unsigned char Position)
{
	Number = 1 & (Number >> Position);
	return Number;
}

unsigned short ChangeFlag(short int Number, unsigned char Position)
{
	Number = Number ^ (1 << Position);
	return Number;
}

unsigned int Binar(short int Number)
{
	int i, k;
	printf("Reprezentarea lui %hd in baza 2 este: ", Number);
	for (i = 31; i >= 0; i--)
	{
		k = Number >> i;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}

int main()
{
	short int Number;
	unsigned char Position;
	int i, k;
	printf("Dati numarul pe care doriti sa lucrati: ");
	scanf("%hd", &Number);
	Binar(Number);
	printf("\nDati pozitia: ");
	scanf("%hhu", &Position);

	printf("%hu\n", SetFlag(Number, Position));
	printf("%hu\n", ClearFlag(Number, Position));
	printf("%hu\n", GetFlag(Number, Position));
	printf("%hu\n", ChangeFlag(Number, Position));
	system("pause");
	return 0;
}