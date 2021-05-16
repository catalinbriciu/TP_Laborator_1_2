#include<stdio.h>
#include<stdlib.h>



int Suma(int N)
{
	if (N == 0) return 0;
	if (N == 1) return 1;
	else return N + Suma(N - 1);
}

int Factorial(int N)
{
	if (N == 0) return 1;
	if (N == 1) return 1;
	else return N * Factorial(N - 1);
}

int Suma_Cifrelor(int N)
{
	if (N < 10) {
		return N;
	}
	else {
		return N % 10 + Suma_Cifrelor(N / 10);
	}
}

int Inv_Nr(int N)
{
	if (N == 0) { return 0; }
	else
	{
		printf("%d", N % 10);
		return Inv_Nr(N / 10);
	}
} 

int ManaPnuelli(int N)
{
	if (N >= 12) return N - 1;
	else
		return ManaPnuelli(ManaPnuelli(N + 2));
}

int cmmdc(int a, int b)
{
	if (b == 0) return a;
	else
		return cmmdc(b, a%b);
}

int Fibo(int N)
{
	if (N == 0) return 0;
	if (N == 1) return 1;
	else return Fibo(N - 1) + Fibo(N - 2);
}

int main()
{
	printf("Suma %d\n", Suma(4));
	printf("Factorial %d\n", Factorial(4));
	printf("Suma cifrelor %d\n", Suma_Cifrelor(84214));
	printf("Manna Pnuelli %d\n", ManaPnuelli(5));
	printf(" = Inversul\n",Inv_Nr(123));
	printf("Cmmdc %d\n", cmmdc(15, 45));
	printf("Fibonacci %d\n", Fibo(5));
	return 0;
}