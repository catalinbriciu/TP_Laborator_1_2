#define _CRT_SECURE_NO_WARNINGS
#define Line 15
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int S, N;

int ProblemaMaxim(int S, int N);
int ProblemaMinim(int S, int N);
void main()
{

	scanf("%d", &S);
	scanf("%d", &N);

	printf("Numarul maxim de monede: %d\n", ProblemaMaxim(S, N));
	printf("Numarul minim de monede: %d\n", ProblemaMinim(S, N));

	system("pause");
}
int ProblemaMaxim(int S, int N)
{
	int Contor = 0;

	while (S)
	{
		S -= 1;
		Contor += 1;
	}
	return Contor;
}
int ProblemaMinim(int S, int N)
{
	int Contor = 0;

	while (N)
	{
		S -= pow(2, N);
		N -= 1;
		Contor += 1;
	}
	if (S)
		while (S)
		{
			S -= 1;
			Contor += 1;
		}
	return Contor;
}