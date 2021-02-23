// DanGH.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

unsigned char CautareLiniara(short int* TablouCautare, short int ElementCautat, short int NrElemente) {
	unsigned char Indice;
	for (Indice = 0; Indice < NrElemente; Indice++)
		if(*(TablouCautare + Indice) == ElementCautat)
			return Indice + 1;
	
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

	std::cout << CautareLiniara(TablouCautare, ElementCautat, NrElemente);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
