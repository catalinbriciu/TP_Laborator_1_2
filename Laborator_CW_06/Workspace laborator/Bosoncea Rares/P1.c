#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v = 7;
	int *vPtr;
	vPtr = &v;
	printf("%d", *vPtr);
}