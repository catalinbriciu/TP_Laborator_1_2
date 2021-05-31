#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

int pow2(int n, int max)
{
	int power = 1, k = 0;
	max = 1 << max;
	while (power < n) {
		power = power << 1;
		if (power >= max)
			return max;
		k++;
	}
	return power >> 1;
}


void solve(int suma, int n)
{
	int pow = pow2(suma, n), k = 0;

	while (suma && pow) {
		if (pow <= suma) {
			printf("%d ", pow);
			k++;
			suma -= pow;
		}
		else
			pow >>= 1;
	}
	printf("\n Numar  minim= %d\n", k);
}



int main() {
	int suma, n;
	scanf("%d", &suma);
	scanf("%d", &n);
	solve(suma, n);
	return;

	system("pause");
	return 0;
}