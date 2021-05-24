#include <stdlib.h>
#include <stdio.h>
char x[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
char y[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
unsigned char a[50][50] = { {0, 0, 0, 1},
	{1, 1, 0, 0},
	{1, 1, 0, 0},
	{1, 1, 0, 0},
	{1, 0, 0, 0},
	{1, 0, 0, 1},
	{1, 1, 0, 1},
	{0, 0, 0, 1} };
unsigned char iesiri = 0;
unsigned char maxim_linii = 8;
unsigned char maxim_coloane = 4;
void Search(int i, int j) {
	int k;
	if (i == 0 || i == maxim_linii - 1 || j == 0 || j == maxim_coloane - 1) {
		iesiri++;
	}
	else
		for (k = 0; k < 8; k++) {
			if (a[i + x[k]][j + y[k]] == 0) {
				a[i + x[k]][j + y[k]] = a[i][j] + 1;
				Search(i + x[k], j + y[k]);
				a[i + x[k]][j + y[k]] = 0;
			}
		}
}
int main()
{
	int i, j;
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			if (a[i][j] == 1)
				Search(i, j);
	printf("Sunt %hhu iesiri\n", iesiri);
	system("pause");
	return 0;
}