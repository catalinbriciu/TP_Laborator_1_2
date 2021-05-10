#include<stdio.h>
#include<stdlib.h>

unsigned int suma(unsigned int numar);
unsigned int factorial(unsigned int numar);
unsigned int suma_cifrelor(unsigned int numar);

//suma 
unsigned int suma(unsigned int numar)
{
	if (numar == 0)
	{
		return 0;
	}
	else 
	{
		return numar + suma(numar - 1);
	}
}
//factorial
unsigned int factorial(unsigned int numar) {
	if (numar == 1)
	{
		return 1;
	}
	else 
	{
		return numar * factorial(numar - 1);
	}
}
//suma cifrelor unui numar
unsigned int suma_cifre(unsigned int numar) {
	if (numar == 0)
	{
		return 0;
	}
	else 
	{
		return numar % 10 + suma_cifre(numar / 10);
	}
}

int main()
{
	printf("%u\n", suma(5));
	printf("%u\n", factorial(4));
	printf("%u\n", suma_cifre(777));
	system("pause");
	return 0;
}