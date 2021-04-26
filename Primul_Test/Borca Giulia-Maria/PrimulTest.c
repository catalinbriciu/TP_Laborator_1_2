#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define max 10

int Stack[max];
unsigned char SP=0;

void Push(unsigned char *Stack, unsigned char *SP, unsigned char Value)
{
	if (IsStackFull(&SP) == 0)
	{
		(*SP)++;
		*(Stack + *SP) = Value;
	}
	else
		printf("Stiva este plina.\n");
}

unsigned char Pop(unsigned char *Stack, unsigned char *SP)
{
	if (IsStackEmpty(&SP) == 0)
		(*SP)--;
	else
		printf("Stiva este goala.\n");
}

unsigned char IsStackFull(unsigned char *SP)
{
	if (*SP == max)
		return 1;
	else
		return 0;
}

unsigned char IsStackEmpty(unsigned char *SP)
{
	if (*SP == 0)
		return 1;
	else
		return 0;
}

void main()
{
	int i;
	push(5);
	push(10);
	push(47);
	push(59);
	push(23);
	for (i = 0; i < 5; i++)
	{
		printf("%u\n", Pop(Stack,SP));
	}
}