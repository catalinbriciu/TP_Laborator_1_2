#include<stdlib.h>
#include<stdio.h>

void Swap1(int p, int q) { // prin valoare
	int k;
	k = p; p = q; q = k;
}

/*void Swap2(int &p, int &q) { // prin referinta (C++)
	int k;
	k = p; p = q; q = k;
}*/

void Swap3(int *p, int *q) { // prin referinta
	int k;
	k = *p; *p = *q; *q = k;
}

int main() {
	int a = 2, b = 5;
	Swap1(a, b); printf("Swap1 -> %d %d\n", a, b);
	//Swap2(a, b); printf("Swap2 -> %d %d\n", a, b);
	Swap3(&a, &b); printf("Swap3 -> %d %d\n", a, b);
	return 0;
}