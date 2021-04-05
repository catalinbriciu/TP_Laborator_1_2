#include<stdio.h>
#include<stdlib.h>

signed char VarfStiva = -1, Value, *Stiva;

void Push(signed char *Stiva, signed char *VarfStiva, signed char Value);
void Pop(signed char *Stiva, signed char *VarfStiva);
void SetValue(signed char *Stiva, signed char VarfStiva, signed char Value);
signed char GetValue(signed char *Stiva, signed char VarfStiva);
void AfisareStiva(signed char *Stiva, signed char VarfStiva);
void ClearStack(signed char *Stiva, signed char *VarfStiva);
void CreateStack(signed char *Stiva);
void RezolvareManna(signed char *Stiva, signed char ValoareDeIntrare);

int main() {

    
    CreateStack(Stiva);
    printf("Dati valoarea pentru functia manna: ");
    scanf("%hhi", &Value);
    RezolvareManna(Stiva, Value);

    system("pause");
    return 0;
}

void Push(signed char *Stiva, signed char *VarfStiva, signed char Value) {
    ++*VarfStiva;
    Stiva = realloc(Stiva, *VarfStiva * sizeof(signed char) + 1);
    *(Stiva + *VarfStiva) = Value;
}

void Pop(signed char *Stiva, signed char *VarfStiva) {
    --*VarfStiva;
    Stiva = realloc(Stiva, *VarfStiva * sizeof(signed char) + 1);
    
}

void SetValue(signed char *Stiva, signed char VarfStiva, signed char Value) {
    *(Stiva + VarfStiva) = Value;
}

signed char GetValue(signed char *Stiva, signed char VarfStiva) {
    return *(Stiva + VarfStiva);
}

void AfisareStiva(signed char *Stiva, signed char VarfStiva) {
    for(signed char *Index = Stiva; Index <= Stiva + VarfStiva; Index++) {
        printf("%hhi ", *Index);
    }
    printf("\n");
}

void ClearStack(signed char *Stiva, signed char *VarfStiva) {
    if(*VarfStiva != -1) {
        free(Stiva);
        *VarfStiva = -1;
        Stiva = (signed char*)malloc(0);
    }
}

void CreateStack(signed char *Stiva) {
    Stiva = (signed char*)malloc(0);
}

void RezolvareManna(signed char *Stiva, signed char ValoareDeIntrare) {
    if(ValoareDeIntrare < 12) {
        printf("Pentru o valoare mai mica decat 12 (%hhi) \n", ValoareDeIntrare);
    } else {
        printf("Pentru o valoare mai mare sau egala cu 12 (%hhi) \n", ValoareDeIntrare);
    }
    Push(Stiva, &VarfStiva, ValoareDeIntrare);
    AfisareStiva(Stiva, VarfStiva);
    while(VarfStiva != -1) {
        if(ValoareDeIntrare < 12) {
            Push(Stiva, &VarfStiva, ValoareDeIntrare + 2);
            AfisareStiva(Stiva, VarfStiva);
            ValoareDeIntrare += 2;
        } else {
            if(VarfStiva == 0) {
                Pop(Stiva, &VarfStiva);
                --ValoareDeIntrare;
            } else {
                Pop(Stiva, &VarfStiva);
                SetValue(Stiva, VarfStiva, --ValoareDeIntrare);
                AfisareStiva(Stiva, VarfStiva);
            }
        }
    }
    printf("Rezultatul este: %hhi\n", ValoareDeIntrare);
}