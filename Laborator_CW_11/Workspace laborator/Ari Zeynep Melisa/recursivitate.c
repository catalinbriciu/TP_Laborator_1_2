#include<stdlib.h>
#include<stdio.h>

//Suma primelor n numere naturale
int Sum(int n)
{
	if (n < 2) return 1;
	else return n + Sum(n - 1);
}

//Calcul Factorial(n)
int Fact(int n)
{
	if (n < 2) return 1;
	else return n * Fact(n - 1);
}

//Calcul suma cifrelor unui număr
int Sumcif(int n)
{
	if (n < 10) return n;
	else return n % 10 + Sumcif(n / 10);
}

//Calcul funcţie Manna-Pnueli
int Manna_Pnueli(int n)
{
	if (n >= 12) return n - 1;
	else if (n < 12) return Manna_Pnueli(Manna_Pnueli(n + 2));
}

//Calcul Cmmdc(a,b)
int Cmmdc(int a, int b)
{
	int r;
	r = a % b;
	if (r)
		return Cmmdc(b, r);
	else
		return b;
}

//Calcul Fibonacci(n)
int Fibbonacci(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return Fibbonacci(n - 1) + Fibbonacci(n - 2);
}

//Inversarea cifrelor unui număr
int Inversare(int n)
{
	if (n == 0) return 0;
	else
	{
		printf("%d", n % 10);
		return Inversare(n / 10);
	}
}

int main() {
	printf("%d\n", Sum(4));
	printf("%d\n", Fact(4));
	printf("%d\n", Sumcif(44));
	printf("%d\n", Manna_Pnueli(16));
	printf("%d\n", Cmmdc(16, 8));
	printf("%d\n", Fibbonacci(4));
	printf("%d\n", Inversare(453));

	system("pause");
	return 0;
}