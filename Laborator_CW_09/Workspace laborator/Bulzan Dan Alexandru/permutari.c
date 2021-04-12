#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int n, Stiva[100];

int Valid(int p) {


	for (int i = 1;i < p;i++)
		if (Stiva[i] == Stiva[p])return 0;

	return 1;


}


void Afisare() {

	for (int i = 1;i <= n;i++)
		printf("%d ", Stiva[i]);

	printf("\n");

}

void BackTracking(int p) {

	for (int i = 1;i <= n;i++) {
		Stiva[p] = i;

		if (Valid(p))
			if (p == n)Afisare();

			else BackTracking(p + 1);




	}





}


int main(void) {

	printf("\n Permutari de cate cifre?\n");
	scanf("%d", &n);
	BackTracking(1);





	system("pause");
}