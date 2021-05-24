#include<stdio.h>
#include<stdlib.h>

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int count = 0;

int a[8][8] = {
	{0,0,0,1,1,0,1,0},
	{1,1,0,0,0,1,0,0},
	{1,1,0,1,0,1,0,0},
	{1,1,0,0,0,0,0,0},
	{1,1,0,0,0,0,0,0},
	{1,0,0,1,0,0,0,1},
	{1,1,1,1,0,0,1,0},
	{0,0,0,0,0,0,0,1}
};

void Search(int i, int j) {
	int k;
	if (i == 0 || i == 7 || j == 0 || j == 7) {
		count++;
		printf("exit\n-(%d %d)+",i,j);
		//la unele solutii trebuie scazute mai multe mutari => ?
		
	}
	else {
		for (k = 0; k < 4; k++) {
			if (a[i + dx[k]][j + dy[k]] == 0) {

				printf("(%d %d)-->", i + dx[k], j + dy[k]);
				a[i + dx[k]][j + dy[k]] = a[i][j] + 1;
				Search(i + dx[k], j + dy[k]);
				a[i + dx[k]][j + dy[k]] = 0;
			}
		}
	}
}


int main()
{
	Search(5, 2);
	printf("\nNr de solutii: %d", count);
	return 0;
}


