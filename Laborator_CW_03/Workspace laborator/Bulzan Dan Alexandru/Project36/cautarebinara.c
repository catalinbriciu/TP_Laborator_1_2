#include<stdio.h>
#include<stdlib.h>

unsigned char CautareBinara(short int *a, short int*nr) {

	short int contor = 0, x = 0, li = 0, ls = *nr - 1, pivot = 0;

	for (contor;contor < *nr;contor++) {

		printf("\n Dati elementul %hd: ", contor);
		scanf("%hd",&a[contor]);
	}

	printf("\n Numarul pe care doriti sa-l cautati: ");
	scanf("%hd", &x);
	if (x<a[li] || x>a[ls])return 0 + '0';
	while (li <ls) {
		pivot = (li + ls) / 2;
		if (a[pivot] == x)return pivot + '0';
		if (a[pivot] < x)li = pivot;
		if (a[pivot] > x)ls = pivot;


	}


}


int main(void) {

	short int *a, nrelemente;
	printf("\n Dati numarul de elemente ale vectorului: ");
	scanf("%hd", &nrelemente);
	a = malloc(nrelemente * sizeof(short int));
	printf("\n%c\n", CautareBinara(a, &nrelemente));
	free(a);

	system("pause");
}