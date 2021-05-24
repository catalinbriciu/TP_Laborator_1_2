#include <stdlib.h>
#include <stdio.h>
unsigned char a[50];
int DI(int li, int ls) {
	int x, y;
	if (li < ls) {
		x = DI(li, (li + ls) / 2);
		y = DI((li + ls) / 2 + 1, ls);
		if (x < y) return y;
		else return x;
	}
	else
		return a[li];
}
int main()
{
	int n = 20;
	printf("%d ", DI(0, n - 1));
	system("pause");
	return 0;
}