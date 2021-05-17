#include<stdlib.h>
#include<stdio.h>

int a[100], n;

void Merge(int li, int ls) { // merge = interclasare
	int i, j, k, m[100], c = 0;
	i = li; k = (li + ls) / 2; j = k + 1;
	while (i <= k && j <= ls) { // selecteaza a[i] sau a[j]
		if (a[i] < a[j])
			m[c++] = a[i++];
		else
			m[c++] = a[j++];
	}
	while (i <= k) m[c++] = a[i++];
	// daca au ramas elemente in stanga
	while (j <= ls) m[c++] = a[j++];
	// daca au ramas elemente in dreapta
	for (i = li; i <= ls; i++)
		a[i] = m[i - li];
}

void DI(int li, int ls) {
	if (li < ls) {
		DI(li, (li + ls) / 2);
		DI((li + ls) / 2 + 1, ls);
		Merge(li, ls); //interclasare
	}
}

int main() {
	int i;
	printf("n=");
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	DI(0, n - 1);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}