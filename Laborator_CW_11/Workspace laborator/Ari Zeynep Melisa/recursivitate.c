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

int main() {
	printf("%d\n", Sum(4));
	printf("%d\n", Fact(4));
	printf("%d\n", Sumcif(44));
	printf("%d\n", Manna_Pnueli (16));

	system("pause");
	return 0;
}