#include<stdlib.h>
#include<stdio.h>


int Sum(int n)
{
	if (n < 2) return 1;
	else return n + Sum(n - 1);
}

int Factorial(int n)
{
	if (n < 2) return 1;
	else return n * Fact0rial(n - 1);
}

int Sumcifre(int n)
{
	if (n < 10) return n;
	else return n % 10 + Sumcifre(n / 10);
}

int MannaPnueli(int n)
{
	if (n >= 12) return n - 1;
	else if (n < 12) return MannaPnueli(MannaPnueli(n + 2));
}

int cmmdc(int a, int b)
{
	int x;
	x = a % b;
	if (x)
		return cmmdc(b, x);
	else
		return b;
}

int fibonaci(int n)
{
	if (!n)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonaci(n - 2) + fibonaci(n - 1);
}

int main() 
{
	printf("%d\n", Sum(10));
	printf("%d\n", Factorial(9));
	printf("%d\n", Sumcifre(8));
	printf("%d\n", MannaPnueli(12));
	printf("%d\n", cmmdc(15,16));
	printf("%d\n", fibonaci(12));

	system("pause");
	return 0;
}