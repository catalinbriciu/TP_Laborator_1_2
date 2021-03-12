#include<stdio.h>
#include<stdlib.h>

unsigned int SetFlag(short int Number)
{
	unsigned char Position;
	printf("\nDati pozitia: ");
	scanf("%hhu", &Position);
	Number = Number | (1 << Position);
	return Number;
}

unsigned int ClearFlag(short int Number)
{
	unsigned char Position;
	printf("\nDati pozitia: ");
	scanf("%hhu", &Position);
	Number = Number & ~(1 << Position);
	return Number;
}

unsigned char GetFlag(short int Number)
{
	unsigned char Position;
	printf("\nDati pozitia: ");
	scanf("%hhu", &Position);
	Number = 1 & (Number >> Position);
	return Number;
}

unsigned short ChangeFlag(short int Number)
{
	unsigned char Position;
	printf("\nDati pozitia: ");
	scanf("%hhu", &Position);
	Number = Number ^ (1 << Position);
	return Number;
}

void Binar(short int Number)
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
	printf("\n");
}

int main()
{
	short int Number, Result;
	int i, k, opt;
	printf("Dati numarul pe care doriti sa lucrati: ");
	scanf("%hd", &Number);
	Binar(Number);
	do {
		printf("\n1.Setati bitul de pe pozitia dorita la valoarea 1.\n");
		printf("2.Setati bitul de pe pozitia dorita la valoarea 0.\n");
		printf("3.Returnati valoarea unui bit.\n");
		printf("4.Schimbati valoarea unui bit.\n");
		printf("0.Iesire.\n");
		printf("\nDati optiunea dorita: ");
		scanf("%d", &opt);
		switch (opt) {
		case 1:
			Result = SetFlag(Number);
			Binar(Result);
			break;
		case 2:
			Result = ClearFlag(Number);
			Binar(Result);
			break;
		case 3:
			Result = GetFlag(Number);
			printf("%hhu\n", Result);
			break;
		case 4:
			Result = ChangeFlag(Number);
			Binar(Result);
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("Optiunea data este incorecta!\n");
			break;
		}
	} while (1);

	system("pause");
	return 0;
}