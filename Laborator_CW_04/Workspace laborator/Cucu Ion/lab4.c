#include<stdio.h>
#include<stdlib.h>



	unsigned short SetFlag(short int Nr, unsigned char Pozitie) {
		return (Nr | (1 << Pozitie));
	}

	unsigned short ClearFlag(short int Nr, unsigned char Pozitie) {
		return (Nr & (~(1 << Pozitie)));
	}

	unsigned char GetFlag(short int Nr, unsigned char Pozitie) {
		if ((Nr & (1 << Pozitie) == (1 << Pozitie))) {
			return 1;
		}
		else {
			return 0;
		}
	}

	unsigned short ChangeFlag(short int Nr, unsigned char Pozitie) {
		return Nr ^ (1 << Pozitie);
	}

	int main() {

		
		short int Nr, Pozitie;
		printf("Introduceti numar: ");
		scanf("%d", &Nr);
		printf("Introduceti pozitie: ");
		scanf("%d", &Pozitie);

		printf("SetFlag %d\n", SetFlag(Nr, Pozitie));
		printf("ClearFlag %d\n", ClearFlag(Nr, Pozitie));
		printf("GetFlag %d\n", GetFlag(Nr, Pozitie));
		printf("ChangeFlag %d\n", ChangeFlag(Nr, Pozitie));

		system("pause");
		return 0;
	}
	

