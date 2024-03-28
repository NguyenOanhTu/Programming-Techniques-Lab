#include <stdio.h>
int inputN(int N){
	do{
		printf("Input N  = ");
		scanf("%d", &N);
	}while(N <= 0 || N >= 20);
}
int inputM(int M){
	do{
		printf("Input M = ");
		scanf("%d", &M);
	}while(M <= 0 || M >= 30);
}
float inputScores(float scores[20][30], int N, int M){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			do{
				printf("Score of course %d - Student %d: ", j, i);
				scanf("%f", &scores[i][j]);
			}while(scores[i][j] < 0 || scores[i][j] > 10);
		}
	}
}
float outputScores(float scores[20][30], int N, int M){
	for(int i = 0; i < N; i++){
		printf("\nScores of students %d: ",i);
		for(int j = 0; j < M; j++){
		printf("%.1f ", scores[i][j]);	
		}
	}
	printf("\n");
}
float AverageOfStudent(float scores[20][30], int N, int M){
	for(int i = 0; i < N; i++){
		float S = 0;
		for(int j = 0; j < M; j++){
			S += scores[i][j];
		}
		printf("\nAverage score of student %d is %.2f", i, S/M);
	} 
	printf("\n");
}
int PassAndFail(float scores[20][30], int N, int M){
	for(int i=0; i < N; i++){
		int pass = 0; int fail = 0;
		for(int j = 0; j < M; j++){
			if (scores[i][j] >= 5)
				pass++;
			else
				fail++;
		}
		printf("\nStudent %d - passed %d and failed %d",i, pass, fail);
	}
}
int main(){
	float scores[20][30], S;
	int N, M, pass, fail;
	printf("students = %d, the number of courses = %d", inputN(N), inputM(M));
	printf("\nInput scores: \n");
	outputScores(scores, N, M);
	AverageOfStudent(scores, N, M);
	PassAndFail(scores, N, M);
	return 0;
}

 
 
