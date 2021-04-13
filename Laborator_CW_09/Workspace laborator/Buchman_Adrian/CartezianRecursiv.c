#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

unsigned char Stack[100];
unsigned char NumberOfSets;
unsigned char EachSetNumberOfElements[100];

unsigned char isSolution(unsigned char StackPeak);
void PrintSolution(unsigned char StackPeak);
void Backtracking(unsigned char StackPeak);

int main() {
	printf("Enter the number of Sets: ");
	if (scanf("%hhu", &NumberOfSets)) {}
	else {} //DUMMY if-else for the return value of scanf
	printf("Enter each set number of elements: \n");
	for (unsigned char Index = 1; Index <= NumberOfSets; Index++) {
		if (scanf("%hhu", &EachSetNumberOfElements[Index])) {}
		else {} //DUMMY if-else for the return value of scanf
	}
	Backtracking(1);
	system("pause");
	return 0;
}

void Backtracking(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= EachSetNumberOfElements[StackPeak]; Index++) {
		Stack[StackPeak] = Index;
		if (isSolution(StackPeak)) {
			PrintSolution(StackPeak);
		} else {
			Backtracking(StackPeak + 1);
		}
	}
}

unsigned char isSolution(unsigned char StackPeak) {
	return StackPeak == NumberOfSets;
}

void PrintSolution(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= StackPeak; Index++) {
		printf("%hhu ", Stack[Index]);
	}
	printf("\n");
}