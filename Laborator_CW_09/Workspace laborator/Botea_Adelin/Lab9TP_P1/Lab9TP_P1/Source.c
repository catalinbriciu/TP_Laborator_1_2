#include <stdio.h>
#include <stdlib.h>// PERMUTĂRI
#define MAX  20
int n, v[MAX]; //n-nr. de elemente, v[20]-vectorul în care construim soluţia
int valid(int k);
int solutie(int k);
void afisare(int k);
void BK(int k);
int main()
{
	printf("n=");
	scanf("%d", &n);  //se citeşte n
	BK(1);
	return 0; //apelăm funcţia BK pentru completarea poziţiei 1din vectorul v
}
void BK(int k)
{
	int i; //i-elementul selectat din multimea Sk, trebuie sa fie variabilă locală, pentru
   // a se memora pe stivă
	for (i = 1; i <= n; i++) //parcurgem elementele mulţimii Sk
	{
		v[k] = i; //selectăm un element din mulţimea Sk
		if (valid(k)) //verificăm dacă eelementul ales îndeplineşte condiiile de continuare
		{
			if (solutie(k)) //verificăm dacă am obţinut o soluţie
				afisare(k); //se afişează soluţia obţinută
			else
				BK(k + 1); //reapemăm funcţia pentru poziţia k+1 din vectorul v
		}
	}
}
int valid(int k) //verificăm condiţiile de continuare
{
	int i;
	for (i = 1; i <= k - 1; i++) //comparăm fiecare element din vectorul v cu ultimul element selectat
		if (v[i] == v[k]) //deoarece într-o permutare elementele nu au voie să se repete,
			return 0; //returnăm 0 în cazul în care elementul selectat, a mai fost selectat o dată
	return 1; //returnăm 1 în cazul în care elementul nu mai apare în vector
}
int solutie(int k) //verificăm dacă am obţinut o soluţie
{
	if (k == n) //am obţinut o permutare, dacă am reuşit să depunem în vector n elemente
		return 1;
	return 0;
}
void afisare(int k) //afişează conţinutul vectorului v
{
	int i;
	for (i = 1; i <= k; i++)
		printf("%d ",v[i]);
	printf("\n"); 
}