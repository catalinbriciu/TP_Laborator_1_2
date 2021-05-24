#include<stdio.h>
#include<stdlib.h>

int a[8] = { 2,7,3,5,1,8,9,4 };

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
	for (int i = 0; i < 8; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("Maximul din vectorul a este: %d\n", DI(0, 7)); 
	system("pause");
	return 0;
}