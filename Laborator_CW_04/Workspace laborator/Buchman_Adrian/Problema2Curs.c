#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUMARUTILIZATORI 65535

/* READ 0
 WRITE 1
 DELETE 2
 RENAME 3
 COPY 4*/

unsigned char Tablou[NUMARUTILIZATORI], isUserSelected = 0;
unsigned short int UtilizatorSelectat;


void MeniuPrincipal();
void MeniuPermisiune(unsigned char ModPermisiune);
void Linker(unsigned char ModPermisiune, unsigned char TipPermisiune);
void SeteazaPermisiune(unsigned short int UtilizatorSelectat, unsigned char TipPermisiune);
unsigned char VerificaPermisiune(unsigned short int UtilizatorSelectat, unsigned char TipPermisiune);


int main() {

    MeniuPrincipal();
    return 0;
}

void MeniuPrincipal() {
     
    enum{SelecteazaUtilizator = 1, SeteazaPermisiunea, VerificaPermisiunea, IesireAplicatie}OptiuneMeniu;

    do {
        if(isUserSelected) {
            system("cls");
            printf("\nUtilizatorul selectat curent este: %hu", UtilizatorSelectat + 1);
        } else {
            system("cls");
            printf("\nNu exista momentan un utilizator selectat!");
        }

        printf("\n==Meniu principal==\n");
        printf("1. Selecteaza un utilizator (numar de ordine)\n");
        printf("2. Seteaza permisiune utilizator\n");
        printf("3. Verifica permisiune utilizator\n");
        printf("4. Iesire\n");
        printf("Optiunea: ");
        scanf("%hhu", &OptiuneMeniu);

        switch (OptiuneMeniu) {
        case SelecteazaUtilizator:
            system("cls");
            if(isUserSelected) {
                char Y_N[2];
                printf("Un utilizator este selectat deja\n");
                printf("Doriti sa schimbati utilizatorul? [Y/N]: ");
                scanf(" %s", Y_N);
                if(strcmp(Y_N, "y") == 0 || strcmp(Y_N, "Y") == 0) {
                    system("cls");
                    printf("Selecteaza un utilizator (1 .. 65535)\n");
                    scanf("%hu", &UtilizatorSelectat);
                    if(UtilizatorSelectat == 0) {
                        UtilizatorSelectat = 1;
                    }
                    UtilizatorSelectat--;
                } else if (strcmp(Y_N, "n") == 0 || strcmp(Y_N, "N") == 0) {
                    system("cls");
                    printf("Utilizatorul nu a fost schimbat\n");
                    system("pause");
                } else {
                    system("cls");
                    printf("Eroare\n");
                    system("pause");
                }
            } else {
                printf("Selecteaza un utilizator (1 .. 65535)\n");
                scanf("%hu", &UtilizatorSelectat);
                if(UtilizatorSelectat == 0) {
                    UtilizatorSelectat = 1;
                }
                UtilizatorSelectat--;
                isUserSelected = 1;
            }
            break;
        case SeteazaPermisiunea:
            if(isUserSelected) {
                MeniuPermisiune(1);
            } else {
                system("cls");
                printf("Inca nu ai selectat nici un utilizator, foloseste prima optiune din meniu\n");
                system("pause");
            }
            break;
        case VerificaPermisiunea:
            if(isUserSelected) {
                MeniuPermisiune(0);
            } else {
                system("cls");
                printf("Inca nu ai selectat nici un utilizator, foloseste prima optiune din meniu\n");
                system("pause");
            }
            break;
        case IesireAplicatie:
            system("cls");
            exit(0);
            system("pause");
            break;
        default: 
            system("cls");
            printf("Optiunea selectata nu se afla pe lista!\n");
            system("pause");
            break;
        }


    } while(1);

}

void MeniuPermisiune(unsigned char ModPermisiune) {

    system("cls");
    enum{READ = 1, WRITE, DELETE, RENAME, COPY, IESIRE}OptiuneMeniu;

    do {
        if(ModPermisiune) {
            printf("\n==Meniu Setare Permisiune==\n");
        } else {
            printf("\n==Meniu Verificare Permisiune==\n");
        }
        printf("1. READ\n");
        printf("2. WRITE\n");
        printf("3. DELETE\n");
        printf("4. RENAME\n");
        printf("5. COPY\n");
        printf("Optiunea: ");
        scanf("%hhu", &OptiuneMeniu);

        switch (OptiuneMeniu) {
        case READ:
            Linker(ModPermisiune, 0);
            MeniuPrincipal();
            break;
        case WRITE:
            Linker(ModPermisiune, 1);
            MeniuPrincipal();
            break;
        case DELETE:
            Linker(ModPermisiune, 2);
            MeniuPrincipal();
            break;
        case RENAME:
            Linker(ModPermisiune, 3);
            MeniuPrincipal();
            break;
        case COPY:
            Linker(ModPermisiune, 4);
            MeniuPrincipal();
            break;
        case IESIRE:
            MeniuPrincipal();
            break;
        default:
            printf("Optiunea nu este pe lista!\n");
            break;
        }

    } while(1);
    
}

void Linker(unsigned char ModPermisiune, unsigned char TipPermisiune) {
    if(ModPermisiune) {
        SeteazaPermisiune(UtilizatorSelectat, TipPermisiune);
        system("cls");
        printf("Permisiunea a fost setata\n");
        system("pause");
    } else {
        if(VerificaPermisiune(UtilizatorSelectat, TipPermisiune)) {
            system("cls");
            printf("Utilizatorul detine aceasta permisiune\n");
            system("pause");
        } else {
            system("cls");
            printf("Utilizatorul nu detine aceasta permisiune\n");
            system("pause");
        }
    }
}

void SeteazaPermisiune(unsigned short int UtilizatorSelectat, unsigned char TipPermisiune) {
    Tablou[UtilizatorSelectat] = Tablou[UtilizatorSelectat] | (1<<TipPermisiune);
}

unsigned char VerificaPermisiune(unsigned short int UtilizatorSelectat, unsigned char TipPermisiune) {
    if(Tablou[UtilizatorSelectat] & (1<<TipPermisiune) == (1<<TipPermisiune)) {
        return 1;
    } else {
        return 0;
    }
}

