#include<stdio.h>
#include<stdlib.h>

#define MAX 20

int numarul, p, v[MAX];  //n-nr. de elemente, v[20]-vectorul în care construim soluţia, p de cate ori sunt luate combinarile
int solutie(int k);
void afisare(int k);
void BK(int k);

void main() 
{
	printf("numarul = "); // se citeste numarul
	scanf("%d", &numarul);
	printf("p= ");  // se citeste p ul
	scanf("%d", &p);
	BK(1);  
}

void BK(int k)
{
	int i;   //i-elementul selectat din multimea Sk, trebuie sa fie variabilă locală, pentru a se memora pe stiva
	for (i = v[k - 1] + 1; i <= numarul; i++) //la pasul k selectăm din mulţime un element mai mare decât elementul
	{
		v[k] = i; //de pe poziţia k-1
		if (solutie(k)) //nu este necesar să verificam condiţiile de continuare, ele sunt respectate
			afisare(k);  //datorită modului în care am selectat elementele
		else
			BK(k + 1);
	}
}

int solutie(int k)  //verificăm dacă am obţinut o soluţie
{
	if (k == p) //am obţinut o permutare, dacă am reuşit să depunem în vector p elemente
		return 1;
	return 0;
}

void afisare(int k)   //afişează conţinutul vectorului v
{
	printf("Combinarile sunt \n");
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ", v[i]);
	printf("\n");
}