#define _CRT_SECURE_NO_WARNINGS
#define Lines 100
#include<stdio.h>
#include<stdlib.h>
int Sir[Lines];

int DI(int LimitS, int LimitI);

int main() {



	for (int i = 0; i < 5; i++)
		scanf("%d", &Sir[i]);

	printf("%d", DI(0,5));

	system("pause");
	return 0;

}
int DI(int LimitI, int LimitS) {

	int a, b;

	if (LimitI < LimitS) {

		a = DI(LimitI,(LimitI + LimitS)/2);
		b = DI((LimitI + LimitS) / 2 + 1, LimitS);
		if (a > b)return a;
		return b;


	}
	else return Sir[LimitI];


}