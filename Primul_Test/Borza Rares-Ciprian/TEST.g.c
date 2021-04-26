#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int stiva[10];
int count = 0;
int isEmpty(){
	if (count == 0)
		return 1;
	else
		return 0;
}

int isFull(){
	if (count == max)
		return 1;
	else
		return 0;
}

void push(int x){
	if (!isFull())
	{
		stiva[count] = x;
		count++;
	}
	else printf("stiva este plina");
}

int pop(){
	if (!isEmpty())
	{
		int res;
		res = stiva[count - 1];
		count--;
		return res;
	}
	else printf("stiva este goala");
}

void main(){
	int i;
	push(69);
	push(420);
	push(42069);
	push(1308);
	push(2001);
	push(20196);
	push(123);
	for (i = 0; i < 7; i++){
		printf("\n%u", pop());
	}
}