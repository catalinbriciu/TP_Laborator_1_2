#include<stdio.h>
#include<stdlib.h>

void fill(int i, int j) {
	int a[20][20], n;

	if (!a[i][j]) {
		
		a[i][j] = 1; 
		fill(i - 1, j);
		fill(i, j + 1);
		fill(i + 1, j);
		fill(i, j - 1);
	}
}
int main() {
	int a[20][20], n, i, j, Px, Py;
	printf("Dati n= ");
	scanf("%d", &n);
	n++;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
				a[i][j] = 1;
			else {
				printf("a[%d][%d]= ", i, j);
				scanf("%d", &a[i][j]);
			}

	printf("\n P(x,y)  :\n x= ");
	scanf("%d", &Px);
	printf("y= ");
	scanf("%d", &Py);
	printf("\n");
	fill(Px, Py);
	for (i = 1; i < n - 1; i++) {
		for (j = 1; j < n - 1; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}