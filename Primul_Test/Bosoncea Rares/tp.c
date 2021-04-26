#include <stdlib.h>
#include <stdio.h>
#include <string.h>
unsigned short *v;
unsigned int i = 0;

int isEmpty()
{
	if (i == 0)
		return 1;
	else
		return 0;
}
int isFull()
{
	if (i == 10)
		return 1;
	else
		return 0;
}


void push(int x)
{
	if (!isFull())
	{
		v[i] = x;
		i++;
	}
	else printf("stiva este plina");
}

int pop()
{
	if (!isEmpty())
	{
		int res;
		res = v[i - 1];
		v--;
		return res;
	}
	else printf("stiva este goala");
}


void main()
{
	unsigned int i, nr, j;
	v = (unsigned short*)malloc(10 * sizeof(unsigned short));
	push(10);
	push(12);
	push(5);
	push(17);
	push(20);
	push(24);
	push(16);
	for (i = 0; i < 7; i++)
	{
		nr = 0;
		for (j = 0; j < 31; j++)
			if ((v[i] >> j) & 1 == 1)
				nr++;
		printf("Numarul de biti de 1 al numarului %d este %d", )
			printf("\n%d", pop());
	}

}

