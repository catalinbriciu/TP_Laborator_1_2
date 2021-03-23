#include<stdio.h>
#include<stdlib.h>

char *vPtr, *vPtr2;

int main()
{
	vPtr = (char*)malloc(sizeof(char));
	vPtr2 = (char*)malloc(sizeof(char));

	printf("%p\n", vPtr);
	printf("%p\n", vPtr2);
	printf("%p\n", vPtr2 + 1);
	printf("%d\n", (vPtr2 - vPtr));
	return 0;
}