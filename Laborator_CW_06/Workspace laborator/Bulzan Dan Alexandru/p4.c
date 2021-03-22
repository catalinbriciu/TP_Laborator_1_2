#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


void swap1(int p, int q) {


	int k;
	k = p;
	p = q;
	q = k;
}

void swap3(int *p, int *q) {

	int k;
	k = *p;
	*p = *q;
	*q = k;


}


int main(void) {


	int a = 2, b = 5;

	swap1(a, b);printf("Swap1 -> %d %d \n", a, b);
	swap3(&a, &b);printf("Swap1 -> %d %d \n", a, b);






	system("pause");
}