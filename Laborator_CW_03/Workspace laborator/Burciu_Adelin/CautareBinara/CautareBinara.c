#include<stdio.h>

unsigned char CautareBinara(unsigned short int* tablou, unsigned short int element_cautat, unsigned short int nr_elemente) {

	unsigned short int i = 0;
	short int k, aux, limita_stanga, limita_dreapta, pivot;

	limita_stanga = 1;
	limita_dreapta = nr_elemente;
	do {

		pivot = (limita_stanga + limita_dreapta) / 2;

		if (tablou[pivot] == element_cautat) {
			return pivot ;
		}
		


		if (tablou[pivot] > element_cautat)
			limita_dreapta = pivot - 1;
		else
			limita_stanga = pivot + 1;

		
	} while (limita_stanga<=limita_dreapta);
	return 0;
}

int main() {
	unsigned short int tablou[250];
	unsigned short int ElementCautat, nr_el;
	printf("Dati nr de elemente:");
	scanf("%hu", &nr_el);
	for (unsigned short i = 1; i <= nr_el; i++) {
		printf("tablou[%hu]=", i);
		scanf("%hu", &tablou[i]);
	}

	printf("Dati nr cautat:");
	scanf("%hu", &ElementCautat);

	if (CautareBinara(tablou, ElementCautat, nr_el) !=0)
		printf("pozitia elementului cautat este:%hhu", CautareBinara(tablou, ElementCautat, nr_el));
	else
		printf("nu s-a gasit elementul cautat");

}