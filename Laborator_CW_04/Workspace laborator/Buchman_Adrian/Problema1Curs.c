#include<stdio.h>
#include<stdlib.h>

unsigned char Tablou[1001];
unsigned short int ElementIntrodus;


int main() {

    while (1) {
        printf("Input number: ");
        if(scanf("%hu", &ElementIntrodus) == EOF) {
             for(unsigned short int Index = 0; Index < 1001; Index++) {
                printf("%hu ", Tablou[Index]);
            }
            exit(0);
        } else if(ElementIntrodus < 0 || ElementIntrodus > 1000) {
            printf("Only numbers from 0 to 1000 please\n");
            continue;
        }
        Tablou[ElementIntrodus]++;

    }

    system("pause");
    return 0;
}