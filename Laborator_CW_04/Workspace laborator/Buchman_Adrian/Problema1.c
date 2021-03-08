#include<stdio.h>
#include<stdlib.h>

unsigned short SetFlag(short int Number, unsigned char Position) {
    return (Number | (1 << Position));
}

unsigned short ClearFlag(short int Number, unsigned char Position) {
    return (Number & (~(1 << Position)));
}

unsigned char GetFlag(short int Number, unsigned char Position) {
    if ((Number & (1 << Position) == (1 << Position))) {
        return 1;
    } else {
        return 0;
    }
}

unsigned short ChangeFlag(short int Number, unsigned char Position) {
    return Number ^ (1 << Position);
}

int main() {

    const short int Number = 0x20;
    const unsigned char Position = 2;

    printf("%hu\n", SetFlag(Number, Position));
    printf("%hu\n", ClearFlag(Number, Position));
    printf("%hhu\n", GetFlag(Number, Position));
    printf("%hu\n", ChangeFlag(Number, Position));

    system("pause");
    return 0;
}