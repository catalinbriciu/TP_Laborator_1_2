#include<stdio.h>
int v = 9;
	int *vPtr;

int main() {

	
	
		printf("%p\n", vPtr);
		vPtr = &v;
		printf("%d\n", *vPtr);
		printf("%p\n", vPtr);
		printf("%p\n", &v);
		return 0;
	

}

/*
* int v=9;
int *vPtr, *vPtr2;
int main()
{
vPtr=&v;
*vPtr = *vPtr + 5; printf("%d\n",*vPtr);
(*vPtr) ++; printf("%d\n",*vPtr);
vPtr2=vPtr; (*vPtr) ++; printf("%d\n",*vPtr2);
printf("%p\n",vPtr);
printf("%p\n",vPtr2);
return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#define tip char
tip *vPtr, *vPtr2;
int main()
{
vPtr=(tip *) malloc(sizeof(tip));
vPtr2=(tip *) malloc(sizeof(tip));
printf("%p\n",vPtr);
printf("%p\n",vPtr2);
printf("%p\n",vPtr2+1);
printf("%d\n",(vPtr2-vPtr));
return 0;
}
*/

/*
void Swap1(int p, int q){ // prin valoare
int k;
k=p;p=q;q=k;
}
void Swap2(int &p, int &q){ // prin referinta (C++)
int k;
k=p;p=q;q=k;
}
void Swap3(int *p, int *q){ // prin referinta
int k;
k=*p;*p=*q;*q=k;
}
int main(){
a=2;b=5;
Swap1(a,b);printf("Swap1 -> %d %d\n",a,b);
Swap2(a,b);printf("Swap2 -> %d %d\n",a,b);
Swap3(&a,&b);printf("Swap3 -> %d %d\n",a,b);
return 0;
}
*/