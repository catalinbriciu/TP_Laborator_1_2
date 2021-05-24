#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[30] = { 2,7,4,9,7,11,45,88,12,0,8 }, n = 11, k, i, j, maxim, maxim_anterior = 32767;
	printf("k= ");
	scanf("%d", &k);
	printf("Submultimea maxima de %d elemente este: ", k);
	for (i = 0; i < k; i++)
	{
		maxim = a[0];
		for (j = 0; j < n; j++)
			if (a[j] > maxim && a[j] < maxim_anterior)
				maxim = a[j];
		printf("%d ", maxim);
		maxim_anterior = maxim;
	}
}