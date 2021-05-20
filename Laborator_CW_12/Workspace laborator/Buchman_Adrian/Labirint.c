#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

char X[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
char Y[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };

unsigned char Matrix[50][50] = { {0, 0, 0, 1},
	{1, 1, 0, 0},
	{1, 1, 0, 0},
	{1, 1, 0, 0},
	{1, 0, 0, 0},
	{1, 0, 0, 1},
	{1, 1, 0, 1},
	{0, 0, 0, 1} };

unsigned char MatrixColumns = 4;
unsigned char MatrixRows = 8;
unsigned char Exits = 0;

void Search(unsigned char FirstIndex, unsigned char SecondIndex);
void Solver(void);

void Search(unsigned char FirstIndex, unsigned char SecondIndex) {
	if (FirstIndex == 0 || FirstIndex == MatrixRows - 1 || SecondIndex == 0 || SecondIndex == MatrixColumns - 1) {
		Exits++;
	} else {
		for (unsigned char ThirdIndex = 0; ThirdIndex < 8; ThirdIndex++) {
			if (Matrix[FirstIndex + X[ThirdIndex]][SecondIndex + Y[ThirdIndex]] == 0) {
				Matrix[FirstIndex + X[ThirdIndex]][SecondIndex + Y[ThirdIndex]] = Matrix[FirstIndex][SecondIndex] + 1;
				Search(FirstIndex + X[ThirdIndex], SecondIndex + Y[ThirdIndex]);
				Matrix[FirstIndex + X[ThirdIndex]][SecondIndex + Y[ThirdIndex]] = 0;
			}
		}
	}
}
void Solver(void) {
	for (unsigned char FirstIndex = 0; FirstIndex < MatrixRows; FirstIndex++) {
		for (unsigned char SecondIndex = 0; SecondIndex < MatrixColumns; SecondIndex++) {
			if (Matrix[FirstIndex][SecondIndex] == 1) {
				Search(FirstIndex, SecondIndex);
			}
		}
	}
	printf("There are %hhu exits\n", Exits);
}

int main() {
	Solver();
	system("pause");
	return 0;
}