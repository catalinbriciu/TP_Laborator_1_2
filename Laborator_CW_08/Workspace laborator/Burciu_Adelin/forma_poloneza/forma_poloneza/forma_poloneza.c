#include<stdio.h>
#include<stdlib.h>

unsigned char expresie[100], forma_poloneza[100];
	short int i=0, lungime_expresie, lungime_poloneza;

	void transformare_expresie();
	void transformare_termen();
	void transformare_factor();


int main() {
	

	printf("Introduceti expresia in forma standard:");
	scanf("%s", expresie);
	lungime_expresie = strlen(expresie);
	transformare_expresie();
	printf("Forma poloneza este:%s", forma_poloneza);

}	
void transformare_expresie() {
	
		transformare_termen();//transforma primul termen din expresie
		while (i < lungime_expresie && expresie[i] =='+') {
			i++; //trece peste +
			transformare_termen();
			forma_poloneza[lungime_poloneza++] = '+'; //pune operatorul dupa
		}

}
void transformare_factor() {
	
	if (expresie[i] == '(') //expresie intre paranteze
	{
		i++;                //se trece peste '('
		transformare_expresie(); //se transforma expresia din paranteza
		i++;                //se trece peste ')'
	}
	else
		forma_poloneza[lungime_poloneza++] = expresie[i++];

}
void transformare_termen() {
	
	transformare_factor(); //transform primul factor al expresiei
	while (i < lungime_expresie && expresie[i] == '*')// nu sa terminat expresia
	{
		i++; //trec peste *
		transformare_factor();
		forma_poloneza[lungime_poloneza++] = '*';//  adauga *
	}
}
