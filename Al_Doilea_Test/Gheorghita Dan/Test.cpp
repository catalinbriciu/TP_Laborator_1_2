#include <iostream>
#include <string>
//Problema impar:
//Se se afiseze toate anagramele posibile ale unui sir de caracatere citit de la tastatura
//in care pe pozitiile pare(p <= 4, start cu 1) se afla o vocala.Problema trebuie sa fie rezolvata folosind
//backtraing recursiv.

#pragma warning(disable:4996)

using namespace std;

unsigned char Stack[20];
unsigned char Stack2[20];
unsigned char StackLenght;

unsigned char isValid(unsigned char StackPeak);
unsigned char isSolution(unsigned char StackPeak);
void Backtracking(unsigned char StackPeak);
void PrintSolution(unsigned char StackPeak);

int main() {

	if (scanf("%hhu", &StackLenght)) {}
	else {} 
	cout << "Introduceti caracterele" << endl;
	for (unsigned char Index = 1; Index <= StackLenght; Index++) {
		
		cin >> Stack2[Index];
	}
	Backtracking(1);
	system("pause");
	return 0;
}

void Backtracking(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= StackLenght; Index++) {
		Stack[StackPeak] = Stack2[Index];
		if (isValid(StackPeak)) {
			if (isSolution(StackPeak)) {
				PrintSolution(StackPeak);
			}
			else {
				Backtracking(StackPeak + 1);
			}
		}
	}
}

unsigned char isValid(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index < StackPeak; Index++) {
		if (Stack[Index] == Stack[StackPeak]) {
			return 0;
		}
	}
	
	return 1;
}

unsigned char isSolution(unsigned char StackPeak) {
  for (unsigned char Index = 1; Index < StackPeak; Index++) {
    if (Index % 2)
      if (strchr("aieou", Stack[Index])) {
        return 0;
      }
  }
	return StackPeak == StackLenght;
}

void PrintSolution(unsigned char StackPeak) {
	for (unsigned char Index = 1; Index <= StackPeak; Index++) {
		cout<<Stack[Index];
	}
	printf("\n");
}
