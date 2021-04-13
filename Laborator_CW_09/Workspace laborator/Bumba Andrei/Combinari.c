#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int n, p, v[MAX];
int solutie(int k);
void afisare(int k);
void BK(int k);

void main(){
	printf("n= ");
	scanf("%d", &n);
	printf("p= ");
	scanf("%d", &p);
	BK(1);
}

void BK(int k){
	int i;
	for (i = v[k - 1] + 1; i <= n; i++){
		v[k] = i;
		if (solutie(k))
			afisare(k);
		else
			BK(k + 1);
	}
}

int solutie(int k){
	if (k == p) return 1;
	return 0;
}

void afisare(int k){
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ", v[i]);
	printf("\n");
}