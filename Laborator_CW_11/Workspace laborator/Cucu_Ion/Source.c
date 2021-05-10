#include<stdlib.h>
#include<stdio.h>

int SumaPrimelorNumere(int n){
	if (n < 2) 
		return 1;
	else 
		return n + SumaPrimelorNumere(n - 1);
}

int Factorialul(int n){
	if (n < 2) 
		return 1;
	else 
		return n * Factorialul(n - 1);
}


int SumaCifrelorNumarului(int n){
	if (n < 10) 
		return n;
	else 
		return n % 10 + SumaCifrelorNumarului(n / 10);
}


int MannaPnueli(int n){
	if (n >= 12) 
		return n - 1;
	else if (n < 12) 
		return MannaPnueli(MannaPnueli(n + 2));
}

int main() {
	printf("%d\n", SumaPrimelorNumere(4));
	printf("%d\n", Factorialul(4));
	printf("%d\n", SumaCifrelorNumarului(44));
	printf("%d\n", MannaPnueli(16));

	system("pause");
	return 0;
}