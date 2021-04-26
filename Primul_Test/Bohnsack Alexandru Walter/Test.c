#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable:4996)

#define NrMAX 10

int Stiva[NrMAX];
int nr = 0;

int If_Empty()
{
	if (nr == 0)
		return 1;
	else
		return 0;
}

int If_Full()
{
	if (nr == NrMAX)
		return 1;
	else
		return 0;
}


void push(int x)
{
	if (!isFull())
	{
		Stiva[nr] = x;
		nr++;
	}
	else printf("stiva este plina");
}

int pop()
{
	if (!isEmpty())
	{
		int res;
		res = Stiva[nr - 1];
		nr--;
		return res;

	}
	else printf("stiva este goala");

}



void main()
{
	int i;
	push(3);
	push(4);
	push(1);
	push(6);
	push(2);
	push(7);
	push(11);
	for (i = 0; i < 7; i++)
	{
		printf("\n%u", pop());
	}
}

unsigned char NrDeBitiDeUnu(int *Stiva, unsigned char nr)
{
	unsigned char NrBitiUnu = 0;
	//i-elemente; j-index pe bit;
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < 32; j++)
		{
			if (Stiva[i] & (1 << j))
			{
				NrBitiUnu++;
			}
		}
	}
}

unsigned char TotalNumberOfBitesOfOne(int* Table, unsigned char NumberOfElements) {
	unsigned char NumberOfOnes = 0;
	for (unsigned char Index = 0; Index < NumberOfElements; Index++) {
		for (unsigned char IndexOnes = 0; IndexOnes < 32; IndexOnes++) {
			if (Table[Index] & (1 << IndexOnes)) {
				NumberOfOnes++;
			}
		}
	}
	return NumberOfOnes;
}