#include<stdlib.h>
#include<stdio.h>

char s[21],n,m;

void init(int k)
{
	s[k] = 0;
}

int succesor(int k)
{
	if (s[k] < n)
	{
		s[k]++;
		return 1;
	}
	else
		return 0;
}

int valid(k)
{
	int i;
	for (i = 1; i < k; i++)
		if (s[i]>='a' && s[i]<='z')
			return 0;
	return 1;
}

int solution(k)
{
	int i,x=0;
	for (i = 0; i < strlen(s); i++)
		if (i % 2 == 0)
			if (strchr("aeiou", s[i]))
				x++;
	if (x == strlen(s) / 2)
		return s;

}

void Print() 
{
	int i;
	for (i = 1; i <= strlen(s); i++)
		printf("%c ", s[i]);
	printf("\n");
}

void back(int k)
{
	if (solution(k))
		Print();
	else
	{
		init(k);
		while (succesor(k))
			if (valid(k))
				back(k + 1);
	}
}

int main()
{
	printf("Introduceti sirul:");
	scanf("%s", s);
	back(1);
}