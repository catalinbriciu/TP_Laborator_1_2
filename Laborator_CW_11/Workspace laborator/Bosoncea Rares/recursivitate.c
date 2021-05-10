#include <stdlib.h>
#include <stdio.h>
int suma(int n)
{
	if (n > 1)
		return n + suma(n - 1);
	else
		return 1;
}
int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}
int suma_cifrelor(int n)
{
	if (n < 10)
		return n;
	else
		return n % 10 + suma_cifrelor(n / 10);
}
int main()
{
	printf("%d\n", suma(4));
	printf("%d\n", factorial(5));
	printf("%d\n", suma_cifrelor(234));
	system("pause");
	return 0;
}