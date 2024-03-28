#include<stdio.h>
int main() {
	FILE *fWrite = fopen("matrix.inp", "w");
	if(fWrite != NULL){
	int matrix[10][10];
	int N, M;
	printf("Input N = ");
	scanf("%d", &N);
	printf("Input M = ");
	scanf("%d", &M);
	printf("N = %d, M = %d", N, M);
	printf("\nInput matrix: \n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			printf("matrix[%d][%d] = ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	fprintf(fWrite, "%d\n", N);
	fprintf(fWrite, "%d\n", M);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
		fprintf(fWrite,"%d ", matrix[i][j]);	
		}
		fprintf(fWrite,"\n");
	}
		fclose(fWrite);
	}
	else{
		printf("File open fail.");
	}
	FILE *fRead = fopen("matrix.inp", "r");
	if(fRead != NULL){
	int matrix[10][10];
	int N, M;
	printf("Read the content of file 'matrix.inp'\n");
	fscanf(fRead, "%d", &N);
	fscanf(fRead, "%d", &M);
	printf("N = %d, M = %d\n", N, M);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
		fscanf(fRead,"%d ", &matrix[i][j]);
		printf("%d ", matrix[i][j]);	
		}
		printf("\n");
	}
		fclose(fRead);
	}
	else{
		printf("File open fail.");
	}
	return 0;
}
