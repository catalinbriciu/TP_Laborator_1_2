#include<stdio.h>
#include<stdlib.h>


unsigned short SetFlag(short int number, unsigned char position) {
	number = number | (1<<position);
	return number;
	//valoarea bitului de pe pozitia data este 1
}

unsigned short ClearFlag(short int number, unsigned char position) {
	number = number & ~(1<<position);
	return number;
	// valoarea bitului de pe pozitia data este 0
}

unsigned char GetFlag(short int number,unsigned char position) {
	if (number & (1 << position) == (1 << position))
		return(1 & (number >> position));
	//returneaza valoarea bitului de pe pozitia data
}

unsigned short ChangeFlag(short int number, unsigned char position) {
	number = number ^ (1<<position);
	//schimba valoarea bitului de pe pozitia data
}


int main() {
	short int opt;
	short int number;
	unsigned char position;
	do {
		printf("0.Exit\n");
		printf("1.SetFlag\n");
		printf("2.ClearFlag\n");
		printf("3.GetFlag\n");
		printf("4.Changeflag\n");

		printf("Dati nr:\n");
		scanf("%d",&number);
		printf("Dati pozitia:");
		scanf("%d", &position);
		printf("Alegeti optiunea:");
		scanf("%d", &opt);
		switch (opt) {
		case 1:printf("%d\n",SetFlag(number, position));
			break;
		case 2:printf("%d\n", ClearFlag(number, position));
			break;
		case 3:printf("%u\n",GetFlag(number,position));
			break;
		case 4:printf("%d\n",ChangeFlag(number,position));
			break;
		case 0:
			exit(0);
		}
	} while (1);
}