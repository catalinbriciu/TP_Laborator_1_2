#include<stdio.h>
#include<stdlib.h>
int suma(int n)
{
	if (n < 2)
		return 1;
	else
		return n + suma(n - 1);
}
int factorial(int n)
{
	if (n < 2)
		return 1;
	else
		return n * suma(n - 1);
}
int cifre_numar(int n)
{
	if (n <= 9)
		return n;
	else
		return n % 10 + cifre_numar(n / 10);
}
int cmmdc(int a, int b)
{
	int r;
	r = a % b;
	if (r)
		return cmmdc(b, r);
	else
		return b;
}
int fibo(int n)
{
	if (!n)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n - 2) + fibo(n - 1);
}
int main()
{
	int n, a, b;
	printf("n= ");
	scanf("%d", &n);
	printf("Suma: %d\nFactorial: %d\nSuma cifre numar: %d\n", suma(n), factorial(n), cifre_numar(n));
	printf("a= ");
	scanf("%d", &a);
	printf("b= ");
	scanf("%d", &b);
	printf("CMMDC: %d\n", cmmdc(a, b));
	printf("n= ");
	scanf("%d", &n);
	printf("Fibbonaci: %d", fibo(n));
}