#include <iostream>

using namespace std;

void SetValue(unsigned char* tab, short int value) {
	*(tab + value / 8) |= 1 << (value % 8);
}

unsigned char IsValueIntoTable(unsigned char* tab, short int value) {
	if ((*(tab + value / 8) & (1 << (value % 8))) == (1 << (value % 8)))
		return 1;
	else 
		return 0;
}

int main()
{
	unsigned char tabela[125] = { 0 };
	short int value;
	do{
		cout << "Introduceti valoarea: ";
		cin >> value;
		
		SetValue(tabela, value);
	} while (value);

	SetValue(tabela, value);
	cout << endl;

	cout << "Cautati valoarea: ";
	cin >> value;
	cout<<(int)IsValueIntoTable(tabela, value);
}
