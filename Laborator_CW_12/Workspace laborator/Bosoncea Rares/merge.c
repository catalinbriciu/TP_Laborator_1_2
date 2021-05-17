#include <stdlib.h>
#include <stdio.h>
unsigned char a[50];
void Merge(int li, int ls) {
	int i, j, k, m[100], c = 0;
	i = li; k = (li + ls) / 2; j = k + 1;
	while (i <= k && j <= ls) {
		if (a[i] < a[j])
			m[c++] = a[i++];
		else
			m[c++] = a[j++];
	}
	while (i <= k) m[c++] = a[i++];

	while (j <= ls) m[c++] = a[j++];

	for (i = li; i <= ls; i++)
		a[i] = m[i - li];
}
int main()
{
	int n = 20;
	for (i = 0; i < 20; i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
		DI(0, n - 1);
		system("pause");
		return 0;
	}