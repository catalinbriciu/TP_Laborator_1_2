#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

unsigned char Stack[100];
unsigned char MaximumLengthOfSequence;
unsigned char MaximumValueInSequence;

unsigned char isSolution(unsigned char StackPeak);
unsigned char isValid(unsigned char StackPeak);
void PrintSolution(unsigned char StackPeak);
void Backtracking(unsigned char StackPeak);

int main() {
	printf("Aranjamente de: ");
	if (scanf("%hhu", &MaximumValueInSequence)) {}
	else {} //DUMMY if-else for return value of scanf
	printf("Luate cate: ");
	if (scanf("%hhu", &MaximumLengthOfSequence)) {}
	else {} //DUMMY if-else for return value of scanf
	Backtracking(1);
	system("pause");
	return 0;
}

void Backtracking(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= MaximumValueInSequence; Index++) {
		Stack[StackPeak] = Index;
		if (isValid(StackPeak)) {
			if (isSolution(StackPeak)) {
				PrintSolution(StackPeak);
			} else {
				Backtracking(StackPeak + 1);
			}
		}
	}
}

unsigned char isSolution(unsigned char StackPeak) {
	return StackPeak == MaximumLengthOfSequence;
}

unsigned char isValid(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index < StackPeak; Index++) {
		if (Stack[Index] == Stack[StackPeak]) {
			return 0;
		}
	}
	return 1;
}

void PrintSolution(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= StackPeak; Index++) {
		printf("%hhu ", Stack[Index]);
	}
	printf("\n");
}