/* Fiind necesară setarea/verificarea permisiunilor pentru utilizatorii unei aplicații, și presupunând că informațiile legate de permisiune (perutilizator) pot fi salvate doar într-o variabilă de 
dimeniunea unui octet(limitări de memorie), să se implementeze funcții pentru setarea și verificarea permisiunilor unui anumit utilizator. Există 5 tipuri de permisiuni: Read/Write/Delete/Rename/Copy.
*/
#include<stdio.h>
#include<stdlib.h>
unsigned short SetFlag(short int number, unsigned char position)
{
	number = number | (1 << position);
	return number;
}
unsigned short ClearFlag(short int number, unsigned char position)
{
	number = number & ~(1 << position);
	return number;
}
int main()
{
	unsigned char *Permisiune, NrUtilizatori, cnt, varianta;
	printf("Introduceti numarul de utilizatori: ");
	scanf("%hhu", &NrUtilizatori);
	Permisiune = (unsigned char *)malloc(NrUtilizatori * sizeof(unsigned char));
	printf("Introduceti permisiunile utilizatorilor folosind 1 pentru DA si 0 pentru NU\n");
	for (cnt = 0; cnt < NrUtilizatori; cnt++)
	{
		Permisiune[cnt] = 0;

		printf("\n\nUtilizator %hhu:\nRead:", cnt + 1);
		scanf("%hhu", &varianta);
		if (varianta)
			Permisiune[cnt] = (unsigned char)SetFlag(Permisiune[cnt], 0);

		printf("Write: ");
		scanf("%hhu", &varianta);
		if (varianta)
			Permisiune[cnt] = (unsigned char)SetFlag(Permisiune[cnt], 1);

		printf("Delete: ");
		scanf("%hhu", &varianta);
		if (varianta)
			Permisiune[cnt] = (unsigned char)SetFlag(Permisiune[cnt], 2);

		printf("Rename: ");
		scanf("%hhu", &varianta);
		if (varianta)
			Permisiune[cnt] = (unsigned char)SetFlag(Permisiune[cnt], 3);

		printf("Copy: ");
		scanf("%hhu", &varianta);
		if (varianta)
			Permisiune[cnt] = (unsigned char)SetFlag(Permisiune[cnt], 4);
	}
	printf("\n");
	for (cnt = 0; cnt < NrUtilizatori; cnt++)
		printf("%hhu ", Permisiune[cnt]);
}