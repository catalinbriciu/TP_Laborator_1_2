#include<stdio.h>
#include<stdlib.h>

int v = 9;
int *vPtr;
int main()
{
	printf("%p\n", vPtr);
	vPtr = &v;
	printf("%d\n", *vPtr);
	printf("%p\n", vPtr);
	printf("%p\n", &v);
	return 0;
}