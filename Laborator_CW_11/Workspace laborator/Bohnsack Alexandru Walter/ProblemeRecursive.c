#include<stdio.h>
#include<stdlib.h>


int Suma(int Nr);
int Factorial(int Nr);
int SumaCifre(int Nr);
int MannaPnueli(int Nr);
int Cmmdc(int Nr1, int Nr2);
int Fibonacci(int Nr);
int Rev(int Nr, int Nr1);


int Suma(int Nr) 
{
	if (Nr == 0) 
	{
		return 0;
	}
	else 
	{
		return Nr + Suma(Nr - 1);
	}
}


int Factorial(int Nr) 
{
	if (Nr == 1) 
	{
		return 1;
	}
	else 
	{
		return Nr*Factorial(Nr - 1);
	}
}


int SumaCifre(int Nr) 
{
	if (Nr == 0) 
	{
		return 0;
	}
	else 
	{
		return Nr % 10 + SumaCifre(Nr / 10);
	}
}


int MannaPnueli(int Nr)
{
	if (Nr >= 12) 
	{
		return Nr - 1;
	}
	else 
	{
		return MannaPnueli(Nr + 2);
	}
}


int Cmmdc(int Nr1, int Nr2) 
{
	if (Nr1 == Nr2) 
	{
		return Nr1;
	}
	else 
	{
		if (Nr1 > Nr2) 
		{
			return Cmmdc(Nr1 - Nr2, Nr2);
		}
		else if (Nr2 > Nr1) 
		{
			return Cmmdc(Nr1, Nr2 - Nr1);
		}
	}
}


int Fibonacci(int Nr) 
{
	if (Nr > 2) 
	{
		return Fibonacci(Nr - 1) + Fibonacci(Nr - 2);
	}
	else {
		return Nr;
	}
}


int Rev(int Nr, int Nr1) 
{
	if (Nr == 0) 
	{
		return Nr1;
	}
	else 
	{
		return Rev(Nr/10, Nr1*10 + Nr%10);
	}
}


void main() 
{
	printf("Suma: %u\n", Suma(6));
	printf("Factorial: %u\n", Factorial(4));
	printf("SumaCifre: %u\n", SumaCifre(111));
	printf("MannaPnueli: %u\n", MannaPnueli(5));
	printf("Cmmdc: %u\n", Cmmdc(8, 4));
	printf("Fibonacci: %u\n", Fibonacci(5));
	printf("Rev: %u\n", Rev(155, 0));
	system("pause");
}

