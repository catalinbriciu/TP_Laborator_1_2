#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

unsigned char Matrix[100][100];
unsigned char MatrixRank;
FILE* File;

void ReadFile(FILE* File, unsigned char Matrix[100][100], unsigned char* MatrixRank);
void Fill(unsigned char PIndex, unsigned char PSecondIndex);
void WriteFile(FILE* File, unsigned char Matrix[100][100], unsigned char MatrixRank);

void ReadFile(FILE* File, unsigned char Matrix[100][100], unsigned char *MatrixRank) {
	File = fopen("in.txt", "rt");
	if (File == NULL) {
		printf("Something went wrong with the input file\n");
		printf("Aborting...\n");
		exit(EXIT_FAILURE);
	} else {
		if (fscanf(File, "%hhu", MatrixRank)) {}
		else {
			printf("Something went wrong with reading the matrix rank\n");
			printf("Aborting...\n");
			exit(EXIT_FAILURE);
		}
		for (unsigned char Index = 0; Index < *MatrixRank; Index++) {
			for (unsigned char SecondIndex = 0; SecondIndex < *MatrixRank; SecondIndex++) {
				if (fscanf(File, "%hhu", &Matrix[Index][SecondIndex])) {}
				else {
					printf("Something went wrong with reading the matrix elements\n");
					printf("Aborting...\n");
					exit(EXIT_FAILURE);
				}
			}
		}
		fclose(File);

	}
}
void Fill(unsigned char PIndex, unsigned char PSecondIndex) {
	if (!Matrix[PIndex][PSecondIndex]) {
		Matrix[PIndex][PSecondIndex] = 1;
		Fill(PIndex - 1, PSecondIndex);
		Fill(PIndex, PSecondIndex + 1);
		Fill(PIndex + 1, PSecondIndex);
		Fill(PIndex, PSecondIndex - 1);
	}

}
void WriteFile(FILE* File, unsigned char Matrix[100][100], unsigned char MatrixRank) {
	File = fopen("out.txt", "wt");
	if (File == NULL) {
		printf("Something went wrong with the output file\n");
		printf("Abording...\n");
		exit(EXIT_FAILURE);
	} else {
		for (unsigned char Index = 0; Index < MatrixRank; Index++) {
			for (unsigned char SecondIndex = 0; SecondIndex < MatrixRank; SecondIndex++) {
				fprintf(File, "%hhu ", Matrix[Index][SecondIndex]);
			}
			fprintf(File, "\n");
		}
		fclose(File);
	}
}

int main() {
	ReadFile(File, Matrix, &MatrixRank);
	Fill(2, 3);
	WriteFile(File, Matrix, MatrixRank);
	system("pause");
	return 0;
}