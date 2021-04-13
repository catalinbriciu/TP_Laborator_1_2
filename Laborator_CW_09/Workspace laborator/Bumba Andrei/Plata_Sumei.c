#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int n = 0, x, v[MAX], w[MAX], z[MAX], S, Suma, sol;
void citire();
int valid(int k);
int solutie();
void afisare(int k);
void BK(int k);

void main(){
	citire();
	BK(1);
}

void BK(int k){
	int i;
	for (i = 0; i <= z[k]; i++){
		v[k] = i;
		if (valid(k) == 1){
			if (solutie() == 1)
				afisare(k);
			else
				BK(k + 1);
		}
	}
}

void citire() {
	int i;
	FILE *f = fopen("monede.txt", "r+t");
	if (f == NULL)
		printf("Eroare fisier!\n");
	else {
		fscanf(f, "%d%d", &S, &n);
		for (i = 1; i <= n; i++) {
			fscanf(f, "%d", &w[i]);
			z[i] = S / w[i];
		}
		fclose(f);
	}
}

int valid(int k){
	int i;
	Suma = 0;
	for (i = 1; i <= k; i++)
		Suma = Suma + v[i] * w[i];
	if ((Suma <= S) && (k <= n))
		return 1;
	return 0;
}

int solutie(){
	if (Suma == S)
		return 1;
	return 0;
}

void afisare(int k){
	int i;
	sol++;
	printf("Solutia %d:\n", sol);
	for (i = 1; i <= k; i++)
		if (v[i])
			printf("%d monede de valoarea %d\n", v[i], w[i]);
	printf("\n");
}