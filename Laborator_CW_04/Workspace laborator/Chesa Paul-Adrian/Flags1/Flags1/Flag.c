#include<stdio.h>

const short int nr = 15;
const unsigned char poz = 2;

unsigned short SetFlag(short int nr, unsigned char poz)
{
	return (nr | (1 << poz));
	
}

unsigned short ChangeFlag(short int nr, unsigned char poz)
{
	return (nr ^ (1 << poz));
}
unsigned short ClearFlag(short int nr, unsigned char poz)
{
	return(nr&(~(1 << poz)));
}
unsigned char GetFlag(short int nr, unsigned char poz) {
	if ((nr & (1 << poz) == (1 << poz))) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	
	SetFlag(nr,poz );
	printf("%hu\n", SetFlag(nr,poz));
	printf("%hu\n", ChangeFlag(nr, poz));
	printf("%hu\n", ClearFlag(nr, poz));
	printf("%hhu\n", GetFlag(nr, poz));
	return 0;
}