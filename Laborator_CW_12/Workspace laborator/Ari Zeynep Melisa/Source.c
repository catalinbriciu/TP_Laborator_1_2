#include<stdio.h>
#include<stdlib.h>

int a[100], n;

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

int main() {
	int i;
	printf("n=");
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("%d ", DI(0, n - 1));

	system("pause");
	return 0;
}