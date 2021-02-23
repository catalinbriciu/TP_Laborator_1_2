#include<stdio.h>
#include<stdlib.h>

unsigned char CautareLiniara(short int *a,short int*nr) {

	short int contor = 0, x = 0;

	printf("\n Numarul pe care doriti sa-l cautati: ");
	scanf("%hd", &x);

	for (contor;contor < *nr;contor++) {

		printf("\n a[%d]= ", contor + 1);
		scanf("%hd", (a+contor));

	}
	
	for (contor=0;contor < *nr;contor++) {

		if (*(a + contor) == x)return contor+1+'0';

	}
	
	if (contor = *nr - 1)return 0+'0';


}


int main(void) {

	short int *a, nrelemente;
	printf("\n Dati numarul de elemente ale vectorului: ");
	scanf("%hd", &nrelemente);
	a = malloc(nrelemente * sizeof(short int));
	printf("\n%c\n",CautareLiniara(a, &nrelemente));
	free(a);

	system("pause");
}