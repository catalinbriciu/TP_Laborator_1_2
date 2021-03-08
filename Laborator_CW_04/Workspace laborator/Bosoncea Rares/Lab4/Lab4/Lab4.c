#include<stdlib.h>
#include<stdio.h>
unsigned short SetFlag(short int number, unsigned char position)
{
	unsigned short new_number;
	new_number = number | (1 << position);
	return new_number;
}
unsigned short ClearFlag(short int number, unsigned char position)
{
	unsigned short new_number;
	new_number = number & ~(1 << position);
	return new_number;
}
unsigned short GetFlag(short int *number, unsigned char position)
{
	(*number&(1<<position)==(1<<position));
	(1 & (*number >> position));
	return number;
}
unsigned short ChangeFlag(short int number, unsigned char position)
{
	unsigned short new_number;
	new_number = number ^(1 << position);
	return new_number;
}
int main()
{
	short int number=63;
	unsigned char position=4;
	printf("SetFlag: ");
	printf("%d\n", SetFlag(number, position));
	printf("UnSetFlag: ");
	printf("%d\n", ClearFlag(number, position));
	printf("GetFlag: ");
	printf("%d\n", GetFlag(&number, position));
	printf("ChangeFlag: ");
	printf("%d\n", ChangeFlag(number, position));
	system("pause");
	return 0;

}