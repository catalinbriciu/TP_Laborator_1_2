#include<stdio.h>
#include<stdlib.h>

int sir[8] = { 2,1,5,7,3,4,9,8 };


int DI(int li, int ls) {
	int x, y;
	if (li < ls) {
		x = DI(li, (li + ls) / 2);
		y = DI((li + ls) / 2 + 1, ls);
		if (x < y) return y;
		else return x;
	}
	else
		return sir[li];
}


int main()
{
	int i;
	
	for (i = 0; i < 7; i++)
	{
		printf("%d", sir[i]);
	}
	printf("\nMaxim: %d", DI(2, 8));
	system("pause");
	return 0;

}