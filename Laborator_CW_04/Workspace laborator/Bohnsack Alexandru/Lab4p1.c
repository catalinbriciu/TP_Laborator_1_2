#include<stdio.h>
#include<stdlib.h>

unsigned short SetFlag(short int Nr, unsigned char Pos)
{
	return (Nr | (1 << Pos));
}

unsigned short ClearFlag(short int Nr, unsigned char Pos)
{
	return (Nr & (~(1 << Pos)));
}

unsigned char GetFlag(short int Nr, unsigned char Pos)
{
	if ((Nr & (1 << Pos) == (1 << Pos)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

unsigned short ChangeFlag(short int Nr, unsigned char Pos)
{
	return Nr ^ (1 << Pos);
}

void main()
{

	const short int Nr = 0x10;
	const unsigned char Pos = 3;

	printf("%hu\n", SetFlag(Nr, Pos));
	printf("%hu\n", ClearFlag(Nr, Pos));
	printf("%hhu\n", GetFlag(Nr, Pos));
	printf("%hu\n", ChangeFlag(Nr, Pos));

	system("pause");

}