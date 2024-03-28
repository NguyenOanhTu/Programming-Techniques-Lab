#include <stdio.h>
int  arr[100], N=1,i;
void inputN(){
	do{
		printf("Input N of the array: ");
		scanf("%d",&N);	
	}
	while (N<=0 || N>=100);
}
void inputarray(){
	printf("\nInput N elements in the array: ");
	for(int i = 0; i < N; i++){
		printf("\nelement %d: ", i);
		scanf("%d", &arr[i]);
	}
}
void printeelement(){
	printf("\nAll elements in array A:");
	for(int i=0; i<N; i++)
		printf("\nelement %d: %d",i,arr[i] );
}
void printelementEven(){
	printf("\nElements which are even integers:");
	for (int i=0; i<N; i++){
		if (arr[i] % 2 == 0)
			printf("\nelement %d: %d",i,arr[i]);
	}
}
void printelementOdd(){
	printf("\nElements which are odd integers:");
	for (int i=0; i<N; i++){
		if (arr[i] % 2 != 0)
			printf("\nelement %d: %d",i,arr[i]);
	}
}
void printelementpositive(){
	printf("\nElements which are positive integers:");
	for (int i=0; i<N; i++){
		if (arr[i] > 0)
			printf("\nelement %d: %d",i,arr[i]);
	}
}
void printelementnegative(){
	printf("\nElements which are negative integers:");
	for (int i=0; i<N; i++){
		if (arr[i] < 0)
			printf("\nelement %d: %d",i,arr[i]);
	}
}
int isprime(int N){
	int i, count = 0;
	for(i=2;i<N;i++){
		if(N % i == 0)
			count++;
	}
	if(N < 2 || count > 0)
		return 0;
	else
		return 1;
}
void printelementprime(){
	printf("\nElements which are prime numbers: ");
    for(int i=0;i<N;i++){
        if(isprime(arr[i]))
           printf("\nelement %d: %d",i,arr[i]);
	}
} 
int main() 
{
	inputN();
	inputarray();
	printeelement();
	printf("\nthe first / last even integer");
	printelementEven();
	printf("\n the first / last odd integer");
	printelementOdd();
	printf("\nthe first / last positive number");
	printelementpositive();
	printf("\nthe first / last negative number");
	printelementnegative();
	printf("\n the first / last prime number");
	printelementprime();
	return 0;
}
