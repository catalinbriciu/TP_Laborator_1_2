#define _CRT_SECURE_NO_WARNINGS
#define Lines 100
#include<stdio.h>
#include<stdlib.h>
int a[Lines];

void DI(int li, int ls);
void Merge(int li, int ls);

int main() {



	for (int i = 0; i <5; i++)
		scanf("%d", &a[i]);

	DI(0, 4);


	for (int i = 0; i <5; i++)
		printf("%d ", a[i]);

	system("pause");
	return 0;
}
void DI(int li, int ls) {


	if (li < ls) {


		DI(li, (li + ls) / 2);
		DI((li + ls) / 2 + 1, ls);
		Merge(li, ls);


	}



}
void Merge(int li, int ls) {

	int i, j, k, V[100], c = 0;

	i = li;
	k = (li + ls) / 2;
	j = k + 1;

	while (i <= k && j <= ls) {

		if (a[i] < a[j]) {
			V[c++] = a[i];
			i++;
		}
		else {
			V[c++] = a[j];
			j++;
		}
	}

	while (i <= k)
		V[c++] = a[i++];
	while (j<= ls)
		V[c++] = a[j++];
	

	for (i = li; i <= ls; i++)
		a[i] = V[i - li];


}