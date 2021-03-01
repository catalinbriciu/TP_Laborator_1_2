#include <iostream>

unsigned char CautareBinara(short int* TablouCautare, short int ElementCautat, short int NrElemente) {
	unsigned char Indice = 0;
	short int li = 1, lf = NrElemente;
	while(li <= lf){
	Indice = (li + lf) / 2;
		if(*(TablouCautare + Indice) == ElementCautat)
		return Indice + 1;
		else if(ElementCautat < *(TablouCautare + Indice))
		        lf = Indice - 1;
		  else
		  li = Indice + 1;
	}
	return 0;
}

int main()
{
	short int* TablouCautare;
	short int ElementCautat, Indice, NrElemente;

	std::cout << "Introduceti numarul de elemente\n";
	std::cin >> NrElemente;

	TablouCautare = (short int*)malloc(sizeof(short int) * NrElemente);

	std::cout << "Introduceti elementul de cautat\n";
	std::cin >> ElementCautat;

	std::cout << "Introduceti elementele\n";
	for (Indice = 0; Indice < NrElemente; Indice++) 
		std::cin >> *(TablouCautare + Indice);

	std::cout << CautareBinara(TablouCautare, ElementCautat, NrElemente);

}
