#include <stdio.h>
#include <stdlib.h>
int DI(int li, int ls)
{
	int x, y;
	int a[100];
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
	int n, i, a[100];
	printf("Nr-ul de elem:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d ", DI(0, n - 1));
	system("pause");
	return 0;
}