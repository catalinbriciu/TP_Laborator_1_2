#define _CRT_SECURE_NO_WARNINGS
#define MaxLines 100
#include<stdlib.h>
#include<stdio.h>

int Numar, Numar2, Suma = 0, Numar3 = 0;
int SumNumere(int Numar);
int Factorial(int Numar);
int SumaCifre(int Numar);
int Manna(int Numar);
int CMMDC(int Numar, int Numar2);
int Fibo(int Numar);
int Inversare(int Numar);

int main() {

	scanf("%d", &Numar);
	scanf("%d", &Numar2);

	printf("%d\n", SumaCifre(Numar));

	printf("%d\n", SumNumere(Numar));

	printf("%d\n", Factorial(Numar));

	printf("%d\n", CMMDC(Numar,Numar2));

	printf("%d\n", Inversare(Numar));

	printf("%d\n", Manna(Numar));

	printf("%d\n", Fibo(Numar));

	system("pause");
	return 0;
}

int SumaCifre(int Numar){

	if (Numar == 0)return 0;
	

	else return Numar % 10 + SumaCifre(Numar / 10);

}

int SumNumere(int Numar) {

	if (Numar == 1)return 1;

	else return Numar + SumNumere(Numar - 1);


}

int Factorial(int Numar) {



	if (Numar == 0)return 1;
	else return Numar * Factorial(Numar - 1);


}

int CMMDC(int Numar, int Numar2) {

	if (Numar == Numar2)return Numar;

if (Numar > Numar2) return CMMDC(Numar - Numar2, Numar2);

 
else  return CMMDC(Numar, Numar2 - Numar);

}

int Fibo(int Numar) {

	if (Numar == 0)return 0;
	if (Numar == 1)return 1;

	return Fibo(Numar-1) + Fibo(Numar - 2);

}

int Inversare(int Numar) {

	if (Numar == 0)return Numar3;

	Numar3 = Numar3 * 10 + Numar % 10;
	Inversare(Numar/10);

}

int Manna(int Numar) {

	if (Numar >= 12)return Numar - 1;

	else return Manna(Manna(Numar + 2));


}