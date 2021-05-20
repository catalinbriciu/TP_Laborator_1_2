#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };


int Verificare(int M[][8], int i, int j, bool visited[][8])
{
	return (i >= 0) && (i <8) && (j >= 0) && (j < 8) && (M[i][j] && !visited[i][j]);
}


void FillObj(int M[][8], int i, int j, bool visited[][8])
{
	visited[i][j] = true;
	for (int k = 0; k < 8; ++k)
		if (Verificare(M, i + x[k], j + y[k], visited))
			FillObj(M, i + x[k], j + y[k], visited);
}

int NrObj(int M[][8])
{
	bool visited[8][8];
	memset(visited, 0, sizeof(visited));
	int count = 0;
	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
			if (M[i][j] && !visited[i][j]) 
			{ 
				FillObj(M, i, j, visited); 
				++count; 
			}
	return count;
}


int main()
{
	
	int M[8][8] = {
	{0,0,0,1,1,0,1,0},
	{1,1,0,0,0,1,0,0},
	{1,1,0,1,0,1,0,0},
	{1,1,0,0,0,0,0,0},
	{1,1,0,0,0,0,0,0},
	{1,0,0,1,0,0,0,1},
	{1,1,1,1,0,0,1,0},
	{0,0,0,0,0,0,0,1}
	};

	printf("Numarul de obiecte: %d\n", NrObj(M));

	return 0;
}

