#include <stdio.h>
#include <stdlib.h>
unsigned short SetFlag(short int number, unsigned char position)
{
	number = number | (1 << position);
}
unsigned short ClearFlag(short int number, unsigned char position)
{
	number = number & ~(1 << position);
}
unsigned char GetFlag(short int number, unsigned char position)
{
	(number&(1 << position) == (1 << position));
}
unsigned short ChangeFlag(short int number, unsigned char position)
{
	number = number ^ (1 << position);
}
int main()
{
	int nr, pozitie;
	printf("Introduceti un numar:");
	scanf("%d", &nr);
	printf("Introduceti pozitia:");
	scanf("%d", &pozitie);
	printf("%d\n", SetFlag(nr, pozitie));
	printf("%d\n", ClearFlag(nr, pozitie));
	printf("%d\n", GetFlag(nr, pozitie));
	printf("%d\n", ChangeFlag(nr, pozitie));
	system("pause");
	return 0;
}