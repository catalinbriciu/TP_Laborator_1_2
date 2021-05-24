#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

const unsigned char Array[] = { 2, 1, 7, 8, 2 , 3 };

unsigned char DI(unsigned char InferiorLimit, unsigned char SuperiorLimit);

unsigned char DI(unsigned char InferiorLimit, unsigned char SuperiorLimit) {
	unsigned char FirstNumber, SecondNumber;
	if (InferiorLimit < SuperiorLimit) {
		FirstNumber = DI(InferiorLimit, (InferiorLimit + SuperiorLimit) / 2);
		SecondNumber = DI((InferiorLimit + SuperiorLimit) / 2 + 1, SuperiorLimit);
		if (FirstNumber > SecondNumber) {
			return FirstNumber;
		} else {
			return SecondNumber;
		}

	} else {
		return Array[InferiorLimit];
	}
}

int main() {
	printf("%hhu", DI(0, 5));
}