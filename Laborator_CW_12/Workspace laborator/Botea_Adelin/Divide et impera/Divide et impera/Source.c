#include<stdio.h>
#include<stdlib.h>

unsigned char a[8] = { 5,2,6,10,9,1,7,8 };

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
	printf("%d\n", DI(0, 7));

	system("pause");
	return 0;
}