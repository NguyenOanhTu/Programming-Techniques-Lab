#include<stdio.h>
#include<stdlib.h>
void inputM(int &M){
	do{
		printf("Input M Rows: ");
		scanf("%d", &M);
	}while(M <= 0 || M >= 10);
}
void inputN(int &N){
	do{
		printf("Input N Columns: ");
		scanf("%d", &N);
	}while(N <= 0 || N >= 10);
}
void inputMatrix(int *ip, int N, int M){
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("Matrix[%d][%d] = ", i, j);
			scanf("%d", (ip+i*N+j));
		}
	}
}
void outputMaxtrix(int *ip, int N, int M){
	printf("\n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("%d\t", *(ip+i*N+j));
		}
	printf("\n");
	}
}
void outputCrossMain(int *ip, int N, int M){
	printf("\n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(i == j)
				printf("%d\t", *(ip+i*N+j));
		}
	printf("\n");
	}
}
int findMax(int *ip, int N, int M){
	long int max = *(ip);
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(max < *(ip+i*N+j))
				max = *(ip+i*N+j);
		}
	}
	return max;
}
int findMin(int *ip, int N, int M){
	long int min = *(ip);
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(min > *(ip+i*N+j))
				min = *(ip+i*N+j);
		}
	}
	return min;
}
int main() {
	int *ip, M, N;
	inputM(M);
	inputN(N);
	ip = (int*) malloc(N*sizeof(int) *M *N);
	printf("Input matrix: \n");
	inputMatrix(ip, N, M);
	printf("Print out the matrix: \n");
	outputMaxtrix(ip, N, M);
	printf("Output cross main: \n ");
	outputCrossMain(ip, N, M);
	printf("Find the maximum number in the matrix: %d\n",findMax(ip, N, M));
	printf("Find the minimum number in the matrix: %d\n",findMin(ip, N, M));
	free(ip);
	return 0;
}







