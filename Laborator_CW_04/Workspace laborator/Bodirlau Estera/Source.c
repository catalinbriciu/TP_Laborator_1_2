#include<stdlib.h>
#include<stdio.h>

unsigned short SetFlag(short int number, unsigned char position)
{
	return number | (1 << position);
	
}
unsigned short ClearFlag(short int number, unsigned char position)
{
	return number &~(1 << position);
	
}
unsigned char GetFlag(short int number, unsigned char position)
{
	if ((number & (1 << position) == (1 << position))) {
		return 1;
	}
	else {
		return 0;
	}
}

unsigned short ChangeFlag(short int number, unsigned char position)
{
	return  number ^ (1 << position);
	
}
int main()
{
	short int number =0x44;
	unsigned char position =3;

	
	printf("%hhu\n", ClearFlag(number, position));
	printf("%hhu\n", SetFlag(number, position));
	printf("%hhu\n", GetFlag(number, position));
	printf("%hhu\n", ChangeFlag(number, position));
	system("pause");
	return 0;
}