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
int findMax(int Matrix[][100], int M, int N)
{
	int max = Matrix[0][0];
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(max < Matrix[i][j])
				max = Matrix[i][j];
		}
	}
	return max;
}
int findMin(int Matrix[][100], int M, int N)
{
	int min = Matrix[0][0];
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(min > Matrix[i][j])
				min = Matrix[i][j];
		}
	}
	return min;
}
int main(){
	int  Matrix[100][100],i, j, M = inputM(M) , N = inputN(N);
	printf("M = %d, N = %d", M,N);
	printf("\nInput matrix: \n");
	InputMatrix(Matrix,M,N);
    OutputMatrix(Matrix,M,N);
	printf("\nMax = %d", findMax(Matrix, M, N));
	printf("\nMin = %d", findMin(Matrix, M, N));
	return 0;
}
