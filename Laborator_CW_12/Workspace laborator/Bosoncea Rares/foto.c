#include <stdlib.h>
#include <stdio.h>
int x[8] = { -1,-1,-1,0,1,1,1,0 };
int y[8] = { -1,0,1,1,1,0,-1,-1 };
int nrObj = 0;
unsigned char a[50][50] = { {0, 0, 0, 1, 1, 0, 1, 0},
	{1, 1, 0, 0, 0, 1, 0 ,0},
	{1, 1, 0, 1, 0, 1, 0 ,0},
	{1, 1, 0, 0, 0, 0, 0, 0},
	{1, 1, 0, 0, 0, 0, 0, 0},
	{1, 0, 0, 1, 0, 0, 0, 1},
	{1, 1, 1, 1, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 1} };
void FillObj(int i, int j) {
	int k;
	if (a[i][j] == 1) {
		a[i][j] = nrObj;
		for (k = 0; k < 8; k++)
			FillObj(i + x[k], j + y[k]);
	}
}
int main()
{
	int i, j;
	for (i = 0; i < 8; i++)
		for (j = 0; i < 8; j++)
			if (a[i][j] == 1)
			{
				nrObj++;
				FillObj(i, j);
			}
	printf("%d", nrObj);
	system("pause");
	return 0;
}