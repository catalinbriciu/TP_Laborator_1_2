#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma warning(disable:4996)

unsigned char Stack[21];
unsigned char StackPeak;
unsigned char Word[20];


unsigned char isValid(unsigned char* Stack, unsigned char StackPeak);
unsigned char isSolution(unsigned char* Stack, unsigned char StackPeak);
void Backtracking(unsigned char StackPeak);
void PrintSolution(unsigned char* Stack, unsigned char StackPeak);
void ReadWord(unsigned char* Word);
unsigned char isVocal(unsigned char Letter);
unsigned char isWordValid(unsigned char* Word);

unsigned char isWordValid(unsigned char* Word) {
	if (strlen(Word) < 4) {
		return 0;
	} else {
		return 1;
	}
}
unsigned char isVocal(unsigned char Letter) {
	if (Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u') {
		return 1;
	} else {
		return 0;
	}
}
void ReadWord(unsigned char* Word) {
	printf("Give the word: ");
	if (scanf("%s", Word)) {}
	else {
		printf("something went wrong with reading the Word\n");
		printf("Abording...\n");
		exit(EXIT_FAILURE);
	}
}
void Backtracking(unsigned char StackPeak) {
	for (unsigned char Index = 0; Index < strlen(Word); Index++) {
		Stack[StackPeak] = Word[Index];
		if (isValid(Stack, StackPeak)) {
			if (isSolution(Stack, StackPeak)) {
				PrintSolution(Stack, StackPeak);
			} else {
				Backtracking(StackPeak + 1);
			}
		}
	}
}
unsigned char isValid(unsigned char* Stack, unsigned char StackPeak) {
	if (StackPeak % 2 == 0) {
		if (isVocal(Stack[StackPeak]) == 0) {
			return 0;
		}
	}
	return 1;
}
unsigned char isSolution(unsigned char* Stack, unsigned char StackPeak) {
	if (StackPeak == strlen(Word)) {
		return 1;
	} else {
		return 0;
	}
}
void PrintSolution(unsigned char* Stack, unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= StackPeak; Index++) {
		printf("%c", Stack[Index]);
	}
	printf("\n");
}
int main() {
	ReadWord(Word);
	while (isWordValid(Word) == 0) {
		printf("Give another word with the length 4 or greater\n");
		ReadWord(Word);
	}
	Backtracking(1);
	system("pause");
	return 0;
}