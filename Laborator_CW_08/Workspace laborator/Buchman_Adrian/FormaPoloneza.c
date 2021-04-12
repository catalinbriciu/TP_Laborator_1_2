#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char SirFinal[255], Value, Stiva[255];
unsigned char NumarDeCaractere, VarfStiva;

void Push(char *Stiva, unsigned char *VarfStiva, char Value);
void Pop(char *Stiva, unsigned char *VarfStiva);
void SetValue(char *Stiva, unsigned char VarfStiva, char Value);
char GetValue(char *Stiva, unsigned char VarfStiva);
void AfisareStiva(char *Stiva, unsigned char VarfStiva);
void ClearStack(char *Stiva, unsigned char *VarfStiva);
void FormaPoloneza(char *Stiva);
unsigned char PrioritateOperator(char CaracterDinExpresie);

int main() {

    FormaPoloneza(Stiva);
    fputs(SirFinal, stdout);
    fputs("\n", stdout);

    system("pause");
    return 0;
}

void Push(char *Stiva, unsigned char *VarfStiva, char Value) {
   Stiva[++(*VarfStiva)] = Value;
}

void Pop(char *Stiva, unsigned char *VarfStiva) {
    (*VarfStiva)--;
}

void SetValue(char *Stiva, unsigned char VarfStiva, char Value) {
   Stiva[VarfStiva] = Value;
}

char GetValue(char *Stiva, unsigned char VarfStiva) {
    return Stiva[VarfStiva];
}


void AfisareStiva(char *Stiva, unsigned char VarfStiva) {
    for(unsigned char Index = 1; Index <= VarfStiva; Index++) {
        fputc(Stiva[VarfStiva], stdout);
        printf(" ");
    }
    printf("\n");
}

void FormaPoloneza(char *Stiva) {
    char Expresie[255];
    printf("Dati expresia matematica care urmeaza sa fie transformata: ");
    fgets(Expresie, 255, stdin);
    for(unsigned char Index = 0; Index < strlen(Expresie) - 1; Index++) {
        if(isalpha(Expresie[Index]) || isalnum(Expresie[Index])) {
            SirFinal[NumarDeCaractere++] = Expresie[Index];
        } else {
            if(PrioritateOperator(Expresie[Index]) == 0) {
                if(Expresie[Index] == '(') {
                    Push(Stiva, &VarfStiva, Expresie[Index]);
                } else if(Expresie[Index] == ')') {
                    while(GetValue(Stiva, VarfStiva) != '(') {
                        if(PrioritateOperator(GetValue(Stiva, VarfStiva)) == 1 || PrioritateOperator(GetValue(Stiva, VarfStiva)) == 2) {
                            SirFinal[NumarDeCaractere++] = GetValue(Stiva, VarfStiva);
                            Pop(Stiva, &VarfStiva);
                        } else {
                            Pop(Stiva, &VarfStiva);
                        }
                    }
                    Pop(Stiva, &VarfStiva);
                }
            } else if(PrioritateOperator(Expresie[Index]) == 1) {
                if(GetValue(Stiva, VarfStiva) == '/' || GetValue(Stiva, VarfStiva) == '*') {
                    SirFinal[NumarDeCaractere++] = GetValue(Stiva, VarfStiva);
                    Pop(Stiva, &VarfStiva);
                    Push(Stiva, &VarfStiva, Expresie[Index]);
                } else {
                    Push(Stiva, &VarfStiva, Expresie[Index]);
                }
            } else if(PrioritateOperator(Expresie[Index]) == 2) {
                if(GetValue(Stiva, VarfStiva) == '/' || GetValue(Stiva, VarfStiva) == '*') {
                    SirFinal[NumarDeCaractere++] = GetValue(Stiva, VarfStiva);
                    Pop(Stiva, &VarfStiva);
                    Push(Stiva, &VarfStiva, Expresie[Index]);
                } else {
                    Push(Stiva, &VarfStiva, Expresie[Index]);
                }
            } else {
                system("cls");
                printf("Expresia contine caractere straine nu putem transforma expresia\n");
                system("pause");
                exit(0);
            }
        } 
    }
}

unsigned char PrioritateOperator(char CaracterDinExpresie) {
    if(CaracterDinExpresie == '(' || CaracterDinExpresie == ')') {
        return 0; 
    } else if(CaracterDinExpresie == '*' || CaracterDinExpresie == '/') {
        return 1;
    } else if(CaracterDinExpresie == '+' || CaracterDinExpresie == '-') {
        return 2;
    }
}