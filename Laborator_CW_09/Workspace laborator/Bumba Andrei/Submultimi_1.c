#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int n, p, v[MAX];
int solutie(int k);
void afisare(int k);
void BK(int k);

void main(){
	int i;
	printf("n= ");
	scanf("%d", &n);
	printf("\nMultimea vida\n");
	for (p = 1; p <= n - 1; p++)
		BK(1);
	printf("{ ");
	for (i = 1; i < n; i++)
		printf("%d, ", i);
	printf("%d }\n", n);
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
	if (k == p)
		return 1;
	return 0;
}

void afisare(int k){
	printf("{ ");
	for (int i = 1; i < k; i++) 
		printf("%d, ", v[i]);
	printf("%d }\n", v[k]);
}