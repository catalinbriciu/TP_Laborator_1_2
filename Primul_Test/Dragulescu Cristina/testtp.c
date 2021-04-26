
#include<stdio.h>
#include<stdlib.h>
#define max 10

int stiva[max];
int count = 0;

int isEmpty()
{
	if (count == 0)
		return 1;
	else
		return 0;
}

int isFull()
{
	if (count == max)
		return 1;
	else
		return 0;
}


void push(int x)
{
	if (!isFull())
	{
		stiva[count] = x;
		count++;
	}
	else printf("stiva este plina");
}

int pop()
{
	if (!isEmpty())
	{
		int res;
		res = stiva[count - 1];
		count--;
		return res;
	}
	else printf("stiva este goala");
}



unsigned int numarare_biti_1(int v)
	{
		unsigned int k = 0;
		while (v) {
			k += v & 1;
			v >>= 1;
		}
		return k;
	}


int main()
{
	
	int i,v;
	push(1);
	push(5);
	push(3);
	push(8);
	push(9);
	push(6);
	push(4);
	for (i = 0; i < 7; i++)
	{
		printf("\n%d", pop());
	}

		while (count != 0)
		{
			v= pop();
			v= numarare_biti_1(v);
			printf("\n%d", v);
			
		}
		
		
		system("pause");
		return 0;
}
