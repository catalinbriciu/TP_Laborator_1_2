#include <iostream>

using namespace std;

unsigned short SetFlag(short int number, unsigned char position) {
    return (number | (1 << position));
}

unsigned short ClearFlag(short int number, unsigned char position) {
    return (number & (~(1 << position)));
}

unsigned char GetFlag(short int number, unsigned char position) {
    if ((number & (1 << position) == (1 << position))) {
        return 1;
    } else {
        return 0;
    }
}

unsigned short ChangeFlag(short int number, unsigned char position) {
    return number ^ (1 << position);
}

int main() {

    short int number;
    unsigned char position = 5;
    
    cout<<"Introduceti numarul:" << endl;
    cin >> number;


    cout << "Numarul cu flag este:" << SetFlag(number,position) << endl;
    cout << "Numarul fara flag este:" << ClearFlag(number,position)<< endl;
    cout << "Bitul de pe pozitie este:" << GetFlag(number, position) << endl;
    cout << "Numarul cu bitul schimbat este:" << ChangeFlag(number, position)<< endl;
    
    return 0;
}
