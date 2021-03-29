#include<stdio.h>
#include<stdlib.h>
void Push(unsigned char* Stack, unsigned char * SP, unsigned char ValueToAdd)
{
	Stack[++( *SP)] = ValueToAdd;
}
unsigned char Pop(unsigned char * Stack, unsigned char *SP)
{
	if ((*SP) > 0)
		return Stack[(*SP)--];
	else
		return -1;
}
unsigned char IsStackFull(unsigned char *SP)
{
	if ((*SP) == 100)
		return 1;
	else
		return 0;
}
unsigned char IsStackEmpty(unsigned char *SP)
{
	if (SP == NULL)
		return 1;
	else
		return 0;
}
void CreateStack(unsigned char * Stack, unsigned char * SP)
{

}
unsigned char ManaPnuelli(unsigned char Val)
{

}
unsigned char MyStack[100];
unsigned char StackPointer;
int main()
{
	int x;
	printf("x= ");
	scanf("%d", &x);
	printf("%d", ManaPnuelli(x));
}