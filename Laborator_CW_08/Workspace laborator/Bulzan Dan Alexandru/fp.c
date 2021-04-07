#define _CRT_SECURE_NO_WARNINGS
#define MAXLINES 100
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned char expresie[MAXLINES], FormaPostfixata[MAXLINES], Operatori[MAXLINES], PostfixareVarf = -1, OperatoriVarf = -1;

void Push(unsigned char c) {

	FormaPostfixata[++PostfixareVarf] = c;

}

void PushOperator2(unsigned char c) {

	Operatori[OperatoriVarf] = c;

}

void PushOperator(unsigned char c) {

	unsigned char v[] = "()*/+-";
	if (strchr(v, c)) Operatori[++OperatoriVarf] = c;




}

unsigned char PopOperator() {

	return Operatori[OperatoriVarf--];

}

unsigned char VerificareCaracter(unsigned char c) {

	if (c >= 'a'&&c <= 'z')return 1;
	return 0;


}

unsigned char PrioritateOperator(unsigned char c) {

	unsigned char v0 = ')';
	unsigned char v1[] = "*/";
	unsigned char v2[] = "+-";

	if (v0 == c)return 0;
	if (strchr(v1, c))return 1;
	if (strchr(v2, c))return 2;

	return -1;

}

void FormaPoloneza(unsigned char  expresie[]) {





	for (int i = 0;i < (int)strlen(expresie);i++) {

		if (VerificareCaracter(expresie[i]) == 1)Push(expresie[i]);
		else PushOperator(expresie[i]);

		if (Operatori[OperatoriVarf] != '(') {


			if (PrioritateOperator(Operatori[OperatoriVarf]) == 0) {
				PopOperator();
				while (Operatori[OperatoriVarf] != '(') {
					Push(Operatori[OperatoriVarf]);
					PopOperator();
				}
				PopOperator();

			}

			if (PrioritateOperator(Operatori[OperatoriVarf]) == 2) {
				if (PrioritateOperator(Operatori[OperatoriVarf - 1]) == 1) {
					unsigned char ScotTemporarVarful = PopOperator();
					Push(Operatori[OperatoriVarf]);
					PushOperator2(ScotTemporarVarful);
				}
			}

		}



	}


}

void CitireExpresie(unsigned char expresie[]) {

	fgets(expresie, MAXLINES, stdin);

}

int main(void) {


	CitireExpresie(expresie);
	FormaPoloneza(expresie);
	printf("%s", FormaPostfixata);
	system("pause");
}