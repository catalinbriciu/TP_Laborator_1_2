#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

/*Function prototype section*/
unsigned int Sum(unsigned int Number);
unsigned int Factorial(unsigned int Number);
unsigned int DigitSum(unsigned int Number);
unsigned int Manna(unsigned int Number);
unsigned int Cmmdc(unsigned int FirstNumber, unsigned int SecondNumber);
unsigned int Fibonacci(unsigned int Number);
unsigned int ReverseNumber(unsigned int Number, unsigned int NewNumber);
/*Function prototype section end*/

/*Function section*/
unsigned int Sum(unsigned int Number) {
	if (Number == 0) {
		return 0;
	}
	else {
		return Number + Sum(Number - 1);
	}
}
unsigned int Factorial(unsigned int Number) {
	if (Number == 1) {
		return 1;
	}
	else {
		return Number * Factorial(Number - 1);
	}
}
unsigned int DigitSum(unsigned int Number) {
	if (Number == 0) {
		return 0;
	} else {
		return Number % 10 + DigitSum(Number / 10);
	}
}
unsigned int Manna(unsigned int Number) {
	if (Number >= 12) {
		return Number - 1;
	} else {
		return Manna(Number + 2);
	}
}
unsigned int Cmmdc(unsigned int FirstNumber, unsigned int SecondNumber) {
	if (FirstNumber == SecondNumber) {
		return FirstNumber;
	} else {
		if (FirstNumber > SecondNumber) {
			return Cmmdc(FirstNumber - SecondNumber, SecondNumber);
		} else if (SecondNumber > FirstNumber) {
			return Cmmdc(FirstNumber, SecondNumber - FirstNumber);
		}
	}
}
unsigned int Fibonacci(unsigned int Number) {
	if (Number > 2) {
		return Fibonacci(Number - 1) + Fibonacci(Number - 2);
	} else {
		return Number;
	}
}
unsigned int ReverseNumber(unsigned int Number, unsigned int NewNumber) {
	if (Number == 0) {
		return NewNumber;
	} else {
		return ReverseNumber(Number / 10, NewNumber * 10 + Number % 10);
	}
}
/*Function section end*/

int main() {
	printf("%u\n", Sum(3));
	printf("%u\n", Factorial(3));
	printf("%u\n", DigitSum(123));
	printf("%u\n", Manna(6));
	printf("%u\n", Cmmdc(6, 3));
	printf("%u\n", Fibonacci(6));
	printf("%u\n", ReverseNumber(123, 0));
	system("pause");
	return 0;
}