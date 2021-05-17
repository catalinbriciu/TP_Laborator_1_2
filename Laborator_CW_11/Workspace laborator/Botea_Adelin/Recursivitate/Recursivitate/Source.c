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
int Manna(int n)
{
	if (n >= 12)
		return n - 1;
	else
		return Manna(n + 2);
}
int cmmdc(int n1,int n2)
{
	if (n1 == n2)
		return n1;
	else
		if (n1 > n2)
			return cmmdc(n1 - n2, n2);
		else
			if (n1 < n2)
				return cmmdc(n2 - n1, n2);
}
int Fibonacci(int n)
{
	;
}
int main()
{
	printf("%d\n", suma(3));
	printf("%d\n", factorial(3));
	printf("%d\n", suma_cifrelor(123));
	printf("%d\n", Manna(12));
	printf("%d\n", cmmdc(12, 14));
	system("pause");
	return 0;
}