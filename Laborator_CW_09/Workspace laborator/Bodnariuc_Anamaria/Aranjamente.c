#include<stdio.h>
#include<stdlib.h>

#define MAX 20

int numarul, p, v[MAX]; //numarul - nr.de elemente, v[20] - vectorul în care construim soluţia, p- de cate ori sunt luate aranjamentele

int validare(int k);
int solutie(int k);
void afisare(int k);
void BK(int k);

int main() 
{
	printf("numarul= ");  //se citeste numarul
	scanf("%d", &numarul);
	printf("p= ");  //se citeste p ul
	scanf("%d", &p);
	BK(1);  
	return 0;   //apelăm funcţia BK pentru completarea poziţiei 1 din vectorul v
}

void BK(int k) 
{
	int i;  //i-elementul selectat din multimea Sk, trebuie sa fie variabilă locală, pentru a se memora in stiva

	for (i = 1; i <= numarul; i++)   //parcurgem elementele mulţimii Sk
	{
		v[k] = i;   //selectăm un element din mulţimea Sk
		if (validare(k))  //verificăm dacă elementul ales îndeplineşte condiiile de continuare
		{
			if (solutie(k)) //verificăm dacă am obţinut o soluţie
				afisare(k);  //se afişează soluţia obţinută
			else
				BK(k + 1);  //reapemăm funcţia pentru poziţia k+1 din vectorul v
		}
	}
}

int validare(int k) //verificăm condiţiile de continuare
{
	int i;
	for (i = 1; i <= k - 1; i++) //comparăm fiecare element din vectorul v cu ultimul element selectat
		if (v[i] == v[k]) //deoarece într-un aranjament elementele nu au voie să se repete,
			return 0;   //returnăm 0 în cazul în care elementul selectat, a mai fost selectat o dată
	return 1;   //returnăm 1 în cazul în care elementul nu mai apare în vector
}

int solutie(int k)  //verificăm dacă am obţinut o soluţie
{
	if (k == p)   //am obţinut o aranjare, dacă am reuşit să depunem în vector p elemente
		return 1;
	return 0;
}

void afisare(int k)   //afişează conţinutul vectorului v
{
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ", v[i]);
	printf("\n");
}