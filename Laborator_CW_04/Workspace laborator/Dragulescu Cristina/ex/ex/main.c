#include<stdio.h>
#include<stdlib.h>

unsigned int setflag(short int N, int k)
{
	N = N | (1 << k);
	return N;
}

unsigned int getflag(short int N, int k)
{
	N = 1 & (N >> k);
	return N;
}

unsigned int changeflag(short int N, int k)
{
	N = N ^ (1 << k);
	return N;
}

unsigned int unsetflag(N, k)
{
	N = N & ~(1 << k);
	return N;
}

void binar(short int N)
{
	int i, p;
	for (i = 31; i >= 0; i--)
	{
		p = N >> i;
		if (p & 1) printf("1");
		else printf("0");
	}
}

int main()
{
	int opt, k;
	short int N, Final;
	printf("Dati numar:");
	scanf("%hd", &N);
	binar(N);
	do {
		printf("\n1.Setflag-seteaza bitul de pe pozitia k la valoarea 1");
		printf("\n2.Getflag-returneaza valoarea bitului de pe pozitia k");
		printf("\n3.Changeflag-schimba valoarea bitului de pe pozitia k");
		printf("\n4.Unsetflag-seteaza bitul de pe pozitia k la valoarea 0");
		printf("\nINTRODUCEI OPTIUNE:");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			printf("Dati pozitia k dorita:");
			scanf("%d", &k);
			Final = setflag(N, k);
			binar(Final);
			break;
		case 2:
			printf("Dati pozitia k dorita:");
			scanf("%d", &k);
			Final = getflag(N, k);
			printf("%hd", Final);
			break;
		case 3:printf("Dati pozitia k dorita:");
			scanf("%d", &k);
			Final = changeflag(N, k);
			binar(Final);
			break;
		case 4:printf("Dati pozitia k dorita:");
			scanf("%d", &k);
			Final = unsetflag(N, k);
			binar(Final);
			break;
		default:printf("\noptiune gresita");
			break;
		}

	} while (opt != 0);
	system("pause");
	return 0;
}