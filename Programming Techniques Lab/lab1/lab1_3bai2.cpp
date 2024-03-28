#include <stdio.h>
int inputM(int M){
	do{
		printf("Input M = ");
		scanf("%d", &M);
	}while(M <= 0 || M >= 10);
	
}
int inputN(int N){
	do{
		printf("Input N = ");
		scanf("%d", &N);
	}while(N <= 0 || N >= 10);
}
int InputMatrix(int Matrix[][100], int M, int N)
{
   for(int i = 0; i < M; i++)
      for(int j = 0; j < N; j++)
      {
         printf("Matrix[%d][%d] = ", i, j);
         scanf("%d", &Matrix[i][j]);
      }
}
int OutputMatrix(int Matrix[][100], int M, int N)
{
   for(int i = 0; i < M; i++)
   {
      for(int j = 0; j < N; j++)
         printf("%d\t", Matrix[i][j]);
      printf("\n");
   }
}
int Sum(int Matrix[][100], int M, int N){
	int sum = 0;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			sum += Matrix[i][j];
		}
	}
	return sum;
}
int main(){
	int  Matrix[100][100],i, j, M = inputM(M) , N = inputN(N);
	printf("M = %d, N = %d", M,N);
	printf("\nInput matrix: \n");
	InputMatrix(Matrix,M,N);
    OutputMatrix(Matrix,M,N);
    printf("\nthe sum of all elements in the matrix  is %d", Sum(Matrix, M, N));
	return 0;
}
