#include<stdlib.h>
#include<stdio.h>

#define MAX_STACK_SIZE 12u

void Push(unsigned char* Stack, unsigned char * SP, unsigned char ValueToAdd)
{
	if (IsStackFull(&SP) == 0) {
		(*SP)++;
		*(Stack + *SP) = ValueToAdd;
	}
	else
		printf("Stiva este plina!\n");
}

unsigned char Pop(unsigned char * Stack, unsigned char *SP)
{
	if (IsStackEmpty(&SP) == 0)
		(*SP)--;
	else
		printf("Stiva este goala!\n");
}

unsigned char IsStackFull(unsigned char *SP)
{
	if (*SP==MAX_STACK_SIZE)
		return 1;
	else
		return 0;
}

unsigned char IsStackEmpty(unsigned char *SP)
{
	if (*SP==0)
		return 1;
	else
		return 0;
}

void CreateStack(unsigned char * Stack, unsigned char * SP)
{
	*SP = 0;
}
unsigned char ManaPnuelli(unsigned char Val);

unsigned char MyStack[MAX_STACK_SIZE];
unsigned char StackPointer;


int main()
{
	unsigned char Val;
	/*Mana Pnuelli*/
	/*f(6)*/
	CreateStack(&MyStack[0u], &StackPointer);
	Val = ManaPnuelli(6);
	printf("%d", Val);
	_getch();
	return 0;
}