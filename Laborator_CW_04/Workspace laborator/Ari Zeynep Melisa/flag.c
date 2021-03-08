#include<stdio.h>
#include<stdlib.h>

unsigned short SetFlag(short int number, unsigned char position)
{
	return number | (1 << position);
}

unsigned short ClearFlag(short int number, unsigned char position)
{
	return number & !(1 << position);
}

unsigned char GetFlag(short int number, unsigned char position)
{
	return (1 & (number >> position));
}

unsigned short ChangeFlag(short int number, unsigned char position)
{
	return number ^ (1 << position);
}

int main()
{
	const short int number = 17;
	const unsigned char position = 3;
	printf("%d\n", SetFlag(number, position));
	printf("%d\n", ClearFlag(number, position));
	printf("%d\n", GetFlag(number, position));
	printf("%d\n", ChangeFlag(number, position));
	system("pause");
	return 0;
}