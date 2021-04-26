#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("in.txt");
ofstream fout("out.txt");

unsigned short Stiva[10];

int isEmpty(int i)
{
	if (i == 0)
		return 1;
	else
		return 0;
}

int isFull(int i)
{
	if (i == 10)
		return 1;
	else
		return 0;
}


void push(unsigned char x, int i)
{
	if (!isFull(i))
	{
		Stiva[i] = x;
	}
	else printf("stiva este plina");
}

int pop(int i)
{
	if (!isEmpty(i))
	{
		int res;
		res = Stiva[i - 1];
		i--;
		return res;
	}
	else printf("Stiva este goala");
}

void main()
{
   
	unsigned char x;
	for (int i = 0; i < 7; i++) {
		    scanf("%hhu", x);
			push(x,i);
	}
	while(
    
}


