#include<stdio.h>
#include<stdlib.h>
void inputN(int &N){
	do{
		printf("Input N: ");
		scanf("%d", &N);
	}while(N <= 0 || N >= 100);
}
void inputArray(int *ip, int N){
	printf("Input N elements in the arry: \n");
	for(int i = 0; i < N; i++)
		scanf("%d", (ip+i));
}
void outputElement(int *ip, int N){
	for(int i = 0; i < N; i++)
		printf("\nElements %d: %d", i, *(ip+i));
}
int countElementOdd(int *ip, int N){
	int count = 0;
	for(int i = 0; i < N; i++){
		if(*(ip+i) %2 != 0)
			count++;
	}
	return count;
}
int sumElement(int *ip, int N){
	int sum = 0;
	for(int i = 0; i < N; i++){
		sum += *(ip+i);
	}
	return sum;
}
int maxElement(int *ip, int N){
	int max = *(ip);
	for(int i = 0; i < N; i++){
		if(max < *(ip+i))
			max = *(ip+i);
	}
	return max;
}
int main() {
	int *ip, N;
	inputN(N);
	ip = (int*) malloc(N*sizeof(int));
	inputArray(ip, N);
	printf("List of elements in arry A:");
	outputElement(ip, N);
	printf("\nSum of all elements in arry A: %d",sumElement(ip, N));
	printf("\nMaximum in the array A: %d",  maxElement(ip, N));
	printf("\nCount the number of odd numbers in the array A: %d", countElementOdd(ip, N));
	free(ip);
	return 0;
}
