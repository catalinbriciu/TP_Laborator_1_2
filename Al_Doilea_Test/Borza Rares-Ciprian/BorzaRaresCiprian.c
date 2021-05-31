#include<stdio.h>
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


void solveUtil(int sum, int n)
{
	int pow = pow2(sum, n), k = 0;
	//printf("%d %d\n",sum,pow);
	while (sum && pow) {
		if (pow <= sum) {
			printf("%d ", pow);
			k++;
			sum -= pow;
		}
		else
			pow >>= 1;
	}
	printf("\n Nr minim=%d\n", k);
}




void main()
{
	int sum, n;
	scanf("%d", &sum);
	scanf("%d", &n);
	solveUtil(sum, n);
	systen("pause");
	return;
}