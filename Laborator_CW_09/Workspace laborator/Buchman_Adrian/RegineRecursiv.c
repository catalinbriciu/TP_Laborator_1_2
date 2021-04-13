#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

unsigned char Stack[100];
unsigned char NumberOfQueens;

unsigned char isValid(unsigned char StackPeak);
unsigned char isSolution(unsigned char StackPeak);
void PrintSolution(unsigned char StackPeak);
void Backtracking(unsigned char StackPeak);

int main() {
	printf("Enter the number of queens: ");
	if (scanf("%hhu", &NumberOfQueens)) {}
	else {} //DUMMY if-else for return value of scanf
	Backtracking(1);
	system("pause");
	return 0;
}

void Backtracking(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= NumberOfQueens; Index++) {
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

unsigned char isValid(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index < StackPeak; Index++) {
		if ((Stack[Index] == Stack[StackPeak]) || (abs(Stack[Index] - Stack[StackPeak]) == (StackPeak - Index))) {
			return 0;
		}
	}
	return 1;
}

unsigned char isSolution(unsigned char StackPeak) {
	return StackPeak == NumberOfQueens;
}

void PrintSolution(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= StackPeak; Index++) {
		printf("%hhu", Stack[Index]);
	}
	printf("\n");
}