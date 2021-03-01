#include<stdio.h>

unsigned char CautareBinara(unsigned short int* tablou, unsigned short int element_cautat, unsigned short int nr_elemente) {

	unsigned short int i = 0;
	short int k, aux;
	do {
		k = 1;
		for (i = 0; i < nr_elemente; i++)
			if (tablou[i] > tablou[i + 1]) {
				aux = tablou[i];
				tablou[i] = tablou[i + 1];
				tablou[i + 1] = aux;
				k = 1;
			}

	} while (k);

	if (tablou[i] == element_cautat) {
		return i;

	}
	else
		return 0;


}

int main() {
	unsigned short int tablou[250];
	unsigned short int ElementCautat, nr_el;
	printf("Dati nr de elemente:");
	scanf("%hu", &nr_el);
	for (unsigned short i = 0; i < nr_el; i++) {
		printf("tablou[%hu]=", i);
		scanf("%hu", &tablou[i]);
	}

	printf("Dati nr cautat:");
	scanf("%hu", &ElementCautat);

	if (CautareBinara(tablou, ElementCautat, nr_el) != 0)
		printf("pozitia elementului cautat este:%hhu", CautareBinara(tablou, ElementCautat, nr_el));
	else
		printf("nu s-a gasit elementul cautat");

}