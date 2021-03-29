#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 12u

void Push(unsigned char* Stack, unsigned char * SP, unsigned char ValueToAdd);
unsigned char Pop(unsigned char * Stack, unsigned char *SP);
unsigned char IsStackFull(unsigned char *SP);
unsigned char IsStackEmpty(unsigned char *SP);
void CreateStack(unsigned char * Stack, unsigned char * SP);
unsigned char ManaPnuelli(unsigned char Val);
unsigned char MyStack[MAX_STACK_SIZE];
unsigned char StackPointer;


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned char Val;
	/*Mana Pnuelli*/
	/*f(6)*/
	CreateStack(&MyStack[0u], &StackPointer);
	Val =  ManaPnuelli(6);
	printf("%d", Val);
	_getch();
	return 0;
}

void Push(unsigned char* Stack, unsigned char * SP, unsigned char ValueToAdd) {
    Stack[++(*SP)];
}

unsigned char Pop(unsigned char * Stack, unsigned char *SP) {
    (*SP)--;
}

unsigned char IsStackFull(unsigned char *SP) {
    if(*SP == MAX_STACK_SIZE) {
        return 1;
    } else {
        return 0;
    }
}

unsigned char IsStackEmpty(unsigned char *SP) {
    if(*SP == 0) {
        return 1;
    } else {
        return 0;
    }
}

void CreateStack(unsigned char * Stack, unsigned char * SP) {
    *SP = 0;
}

unsigned char ManaPnuelli(unsigned char Val) {
    unsigned char ValoareEliminata;
    if(Val < 12) {
        printf("Pentru o valoare mai mica decat 12 (%hhu) \n", Val);
    } else {
        printf("Pentru o valoare mai mare sau egala cu 12 (%hhu) \n", Val);
    }
    Push(MyStack, &StackPointer, Val);
    while(IsStackEmpty(StackPointer) == 0) {
        if(Val < 12) {
            Push(MyStack, &StackPointer, Val + 2);
            Val += 2;
        } else {
                Pop(MyStack, &StackPointer);
                ValoareEliminata = Pop(MyStack, &StackPointer);
                Push(MyStack, &StackPointer, ValoareEliminata + 1);
                Val = ValoareEliminata + 1;
        }
    }
    printf("Rezultatul este: %hhu\n", Val);
}


