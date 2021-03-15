#include<stdio.h>
#include<stdlib.h>

unsigned short SetFlag(short int Numar, unsigned char Pozitie)
{
	return (Numar | (1 << Pozitie));
}

unsigned short ClearFlag(short int Numar, unsigned char Pozitie)
{
	return (Numar & (~(1 << Pozitie)));
}

unsigned char GetFlag(short int Numar, unsigned char Pozitie)
{
	if ((Numar & (1 << Pozitie) == (1 << Pozitie)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

unsigned short ChangeFlag(short int Numar, unsigned char Pozitie)
{
	return Numar ^ (1 << Pozitie);
}

int main()
{

	const short int Numar=5;
	const unsigned char Pozitie=3;

	printf("%hu\n", SetFlag(Numar, Pozitie));
	printf("%hu\n", ClearFlag(Numar, Pozitie));
	printf("%hhu\n", GetFlag(Numar, Pozitie));
	printf("%hu\n", ChangeFlag(Numar, Pozitie));

	system("pause");
	return 0;
}