#include<stdio.h>
#include<stdlib.h>


unsigned char VerificareBit(short int NumarDeVerificat, unsigned char PozitiaBit) {
   // return ((NumarDeVerificat & (1 << PozitiaBit)) == (1 << PozitiaBit)); 
   if((NumarDeVerificat & (1 << PozitiaBit)) == (1 << PozitiaBit)) {
       return 1;
   } else {
       return 0;
   }
}


int main() {

    short int NumarDeVerificat;
    unsigned char NumarBitiDeUnu = 0;

    printf("Dati numarul de la tastatura: ");
    scanf("%hu", &NumarDeVerificat);

    for(unsigned char Index = 0; Index < 15; Index++) {
        if(VerificareBit(NumarDeVerificat, Index)) {
            NumarBitiDeUnu += 1;
        }
    }

    printf("Numarul de biti de 1 este: %hhu\n", NumarBitiDeUnu);

    system("pause");
    return 0;
}