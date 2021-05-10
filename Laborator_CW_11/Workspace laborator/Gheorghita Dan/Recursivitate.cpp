#include <iostream>

using namespace std;

int Suman(int n)
{
    if (n<2) return 1;
    else return n+Suman(n-1);
}

int factorial(int n)
{
    if (n<2) return 1;
    else return n*factorial(n-1);
}

int sumacifre(int n)
{
    if (n == 0) return 0;
    else  
        return n%10 + sumacifre(n/10);
    
}

int Manna(int n)
{
    if (n >= 12) {
		return n - 1;
	} else {
		return Manna(n + 2);
	}
    
}

int Cmmdc(int x, int y) {
	if (x == y) {
		return x;
	} else {
		if (x > y) {
			return Cmmdc(x - y, y);
		} else if (y > y) {
			return Cmmdc(x, y - x);
		}
	}
}


int Fibonacci(int n) 
{
	if (n > 2) 
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	else {
		return n;
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

int main()
{
   
   cout << Suman(4) << endl;;
   cout << factorial(5) << endl;
   cout << sumacifre(1032) << endl;
   cout << Manna(6) << endl;
   cout << Cmmdc(4,20) << endl;
   cout << Fibonacci(6) << endl;
   cout << Rev(503,0) << endl;
   
   return 0;
}
