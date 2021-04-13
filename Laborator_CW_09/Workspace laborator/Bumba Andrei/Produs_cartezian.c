#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>
#include<stdlib.h>

#define MAX 20
int n, v[MAX], w[MAX];

void BK(int k);
void citire();
void afisare(int k);
int solutie(int k);

void main(){
	citire();
	BK(1);
}

void BK(int k) {
	int i;
	for (i = 1; i <= w[k]; i++) {
		v[k] = i;
		if (solutie(k))
			afisare(k);
		else
			BK(k + 1);
	}
}

void citire(){
	int i;
	FILE *f = fopen("prod.txt", "r+t");
	if (f == NULL)
		printf("Eroare fisier!\n");
	else {
	fscanf(f, "%d", &n);
	for (i = 1; i <= n; i++)
		fscanf(f, "%d", &w[i]);
	fclose(f);
	}
}

int solutie(int k){
			if (k == n)
				return 1;
			return 0;
}

void afisare(int k){
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ", v[i]);
	printf("\n");
}