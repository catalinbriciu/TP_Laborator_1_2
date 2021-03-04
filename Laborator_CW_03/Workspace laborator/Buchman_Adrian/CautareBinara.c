#include<stdio.h>
#include<stdlib.h>

unsigned char NrElemente;


void Citire(unsigned short int *TablouCautare, unsigned char *NrElemente, unsigned short int *ElementCautat) {
	
	printf("Dati numarul de elemente din tablou: ");
	scanf("%hhu", NrElemente);

	for (unsigned char Index = 0; Index < *NrElemente; Index++) {
		scanf("%hu", &TablouCautare[Index]);
	}

	printf("Dati elementul cautat: ");
	scanf("%hu", ElementCautat);

}

//NOTE: changed short int to unsigned short int (short int -32768 to 32767 and unsigned short int 65535)
unsigned char CautareBinara(unsigned short int *TablouCautare, unsigned short int ElementCautat) {

	unsigned char LimitaInferioara = 0, LimitaSuperioara = NrElemente - 1, IndexPivot;

    while (LimitaInferioara <= LimitaSuperioara) {
        IndexPivot = (LimitaInferioara + LimitaSuperioara) / 2;
        if(TablouCautare[IndexPivot] == ElementCautat) {
            return IndexPivot;
        } else if (ElementCautat < TablouCautare[IndexPivot]) {
            LimitaSuperioara = IndexPivot - 1;
        } else if (ElementCautat > TablouCautare[IndexPivot]) {
            LimitaInferioara = IndexPivot + 1;
        }
    }

    return 255;

}



int main() {

    unsigned short int TablouCautare[250], ElementCautat;
	
	Citire(TablouCautare, &NrElemente, &ElementCautat);
	if (CautareLiniara(TablouCautare, ElementCautat) != 255) {
		printf("Elementul se afla pe pozitia %hhu\n", CautareBinara(TablouCautare, ElementCautat));
	} else {
		printf("Nu am gasit elementul in tablou!\n");
	}
		
	system("pause");
	return 0;
}

