#include<stdlib.h>
#include<stdio.h>

unsigned short SetFlag(short int number, unsigned char position)
{
	return (number | (1 << position));
}

unsigned short ClearFlag(short int number, unsigned char position)
{
	return(number&(~(1 << position)));
}

unsigned char GetFlag(short int number, unsigned char position)
{
	if (number &(1 << position) == (1 << position))
		return 1;
	else
		return 0;
}

unsigned short ChangeFlag(short int number, unsigned char position)
{
	return (number ^ (1 << position));
}

int main()
{
	int number = 0x12, position = 2;
	printf("%d\n", SetFlag(number, position));
	printf("%d\n", ClearFlag(number, position));
	printf("%d\n", GetFlag(number, position));
	printf("%d\n", ChangeFlag(number, position));
	system("pause");
	return 0;
}