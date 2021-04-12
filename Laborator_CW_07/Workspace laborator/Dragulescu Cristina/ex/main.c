#include<stdlib.h>
#include<stdio.h>

#define MAX_STACK_SIZE 12u
unsigned char ManaPnuelli(unsigned char Val);

unsigned char MyStack[MAX_STACK_SIZE];
unsigned char StackPointer;


void Push(unsigned char* Stack, unsigned char * SP, unsigned char ValueToAdd)
{
	if (IsStackFull(&SP) == 0)
	{
		(*SP)++;
		*(Stack + *SP) = ValueToAdd;
	}
	else
		printf("Stiva full!\n");
}

unsigned char Pop(unsigned char * Stack, unsigned char *SP)
{
	if (IsStackEmpty(&SP) == 0)
		(*SP)--;

	else
		printf("Stiva goala!\n");
}

unsigned char IsStackFull(unsigned char *SP)
{
	if (*SP == MAX_STACK_SIZE)
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

void CreateStack(unsigned char * Stack, unsigned char * SP)
{
	*SP = 0;
}


int main()
{
	unsigned char Val;
	CreateStack(&MyStack[0u], &StackPointer);
	Val = ManaPnuelli(6);
	printf("%d", Val);
	_getch();
	return 0;
}