#include<stdio.h>
#include<stdlib.h>

unsigned short SetFlag(short int n, unsigned char pozitie) {

	n = n | (1 << pozitie);
	return n;



}


unsigned short ClearFlag(short int n, unsigned char pozitie) {

	n = n & ~(1 << pozitie);
	return n;


}


unsigned char GetFlag(short int n, unsigned char pozitie) {

	
	return (1 & (n >> pozitie));




}


unsigned short ChangeFlag(short int n, unsigned char pozitie) {

	n = n ^ (1 << pozitie);
	return n;


}


int main(void) {

	unsigned char pozitie;
	 short int  n;

	printf("\n Dati numarul: ");
	scanf("%hd", &n);
	printf("\n Dati pozitia: ");
	scanf("%hhu", &pozitie);

	printf("\n%hu", SetFlag(n, pozitie));
	printf("\n%hu", ClearFlag(n, pozitie));
	printf("\n%hhu", GetFlag(n, pozitie));
	printf("\n%hu\n", ChangeFlag(n, pozitie));
	
	system("pause");
}