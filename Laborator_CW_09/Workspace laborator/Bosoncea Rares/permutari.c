#include <stdlib.h>
#include <stdio.h>
int n, v[20];
void init(int k)
{
	v[k] = 0;
}
int succesor(int k)
{
	if (v[k] < n)
	{
		v[k]++;
		return 1;
	}
	else
		return 0;
}
int valid(int k)
{
	int i;
	for (i = 1; i < k; i++)
		if (v[k] == v[i])
			return 0;
		else
			return 1;
}
int solution(int k)
{
	return (k == n);
}
void afisare(int k)
{
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ", v[i]);
	printf("\n");
}
void BK(int k)
{
	if (solution(k))
		afisare(k);
	else
	{
		init(k);
		while (succesor(k))
			if (valid(k))
				BK(k + 1);
	}
}

int main()
{
	printf("n=");
	scanf("%d", &n);
	BK(1);
}