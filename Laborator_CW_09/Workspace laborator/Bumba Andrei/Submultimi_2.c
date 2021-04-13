#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int n, p, v[MAX];
int valid(int k);
int solutie(int k);
void afisare(int k);
void BK(int k);

void main()
{
	printf("n= ");
	scanf("%d", &n);
	printf("Multimea vida\n");
	BK(1);
}

int valid(int k){
	int i;
	for (i = 1; i <= k - 1; i++)
		if (v[i] == v[k])
			return 0;
	return 1;
}

void BK(int k){
	int i;
	for (i = v[k - 1] + 1; i <= n; i++){
		v[k] = i;
		afisare(k);
		BK(k + 1);
	}
}

int solutie(int k) {
	if (k == p)
		return 1;
	return 0;
}

void afisare(int k) {
	printf("{ ");
	for (int i = 1; i < k; i++)
		printf("%d, ", v[i]);
	printf("%d }\n", v[k]);
}