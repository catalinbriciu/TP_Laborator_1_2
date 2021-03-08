#include<stdio.h>

int main() {
	int nr=0 ,n,i,m;
	printf("introduceti nr dorit:");
	scanf("%d", &n);
	m = n;

	for (i = 32; i >= 0; i--) {
		if (n & 1 == 1)
			nr++;
		n=(n >> 1);
	}

	printf("nr %d are %d biti de 1", m, nr);

}