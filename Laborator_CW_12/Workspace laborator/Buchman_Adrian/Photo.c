#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

char X[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
char Y[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };

unsigned char Matrix[50][50] = { {0, 0, 0, 1, 1, 0, 1, 0},
	{1, 1, 0, 0, 0, 1, 0 ,0},
	{1, 1, 0, 1, 0, 1, 0 ,0},
	{1, 1, 0, 0, 0, 0, 0, 0},
	{1, 1, 0, 0, 0, 0, 0, 0},
	{1, 0, 0, 1, 0, 0, 0, 1},
	{1, 1, 1, 1, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 1} };

unsigned char MatrixSize = 8;
unsigned char NumberOfObjects = 1;

void FillObject(unsigned char FirstIndex, unsigned char SecondIndex);
void Solver(void);

void FillObject(unsigned char FirstIndex, unsigned char SecondIndex) {
	if (Matrix[FirstIndex][SecondIndex] == 1) {
		Matrix[FirstIndex][SecondIndex] = NumberOfObjects;
		for (unsigned char ThirdIndex = 0; ThirdIndex < 8; ThirdIndex++) {
			FillObject(FirstIndex + X[ThirdIndex], SecondIndex + Y[ThirdIndex]);
		}
	}
}
void Solver(void) {
	for (unsigned char FirstIndex = 0; FirstIndex < MatrixSize; FirstIndex++) {
		for (unsigned char SecondIndex = 0; SecondIndex < MatrixSize; SecondIndex++) {
			if (Matrix[FirstIndex][SecondIndex] == 1) {
				NumberOfObjects++;
				FillObject(FirstIndex, SecondIndex);

			}
		}
	}
	printf("There are %hhu objects\n", NumberOfObjects - 1);
}

int main() {
	Solver();
	system("pause");
	return 0;
}