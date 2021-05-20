#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

unsigned char Array[] = { 1, 3, 5, 2, 4, 7, 9, 8 };

void DI(unsigned char InferiorLimit, unsigned char SuperiorLimit);
void Merge(unsigned char InferiorLimit, unsigned char SuperiorLimit);

void DI(unsigned char InferiorLimit, unsigned char SuperiorLimit) {
	if (InferiorLimit < SuperiorLimit) {
		DI(InferiorLimit, (InferiorLimit + SuperiorLimit) / 2);
		DI((InferiorLimit + SuperiorLimit) / 2 + 1, SuperiorLimit);
		Merge(InferiorLimit, SuperiorLimit);
	}
}
void Merge(unsigned char InferiorLimit, unsigned char SuperiorLimit) {
	unsigned char FirstIndex;
	unsigned char SecondIndex;
	unsigned char MiddleIndex;
	unsigned char Merger[100];
	unsigned char MergerLength = 0;
	FirstIndex = InferiorLimit;
	MiddleIndex = (InferiorLimit + SuperiorLimit) / 2;
	SecondIndex = MiddleIndex + 1;
	while (FirstIndex <= MiddleIndex && SecondIndex <= SuperiorLimit) {
		if (Array[FirstIndex] < Array[SecondIndex]) {
			Merger[MergerLength++] = Array[FirstIndex++];
		} else {
			Merger[MergerLength++] = Array[SecondIndex++];
		}
	}
	while (FirstIndex <= MiddleIndex) {
		Merger[MergerLength++] = Array[FirstIndex++];
	}
	while (SecondIndex <= SuperiorLimit) {
		Merger[MergerLength++] = Array[SecondIndex++];
	}
	for (FirstIndex = InferiorLimit; FirstIndex <= SuperiorLimit; FirstIndex++) {
		Array[FirstIndex] = Merger[FirstIndex - InferiorLimit];
	}
}

int main() {
	DI(0, 7);
	for (unsigned char Index = 0; Index < 8; Index++) {
		printf("%hhu ", Array[Index]);
	}
	printf("\n");
	system("pause");
	return 0;
}