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
	int sum_even = 0;
	for (int i=0; i<N; i++){
		if (arr[i] % 2 == 0)
			sum_even += arr[i];
	}
	printf("\nSum even integers: %d",sum_even);
	for (int i=0; i<N; i++){
		if (arr[i] % 2 == 0)
			printf("\nelement %d: %d",i,arr[i]);
	}
}
void printelementOdd(){
	int sum_odd = 0;
	for (int i=0; i<N; i++){
		if (arr[i] % 2 != 0)
			sum_odd += arr[i];
	}
	printf("\nSum odd integers: %d",sum_odd);
	for (int i=0; i<N; i++){
		if (arr[i] % 2 != 0)
			printf("\nelement %d: %d",i,arr[i]);
	}
}
void printelementPositive(){
	int sum_positive = 0;
	for (int i=0; i<N; i++){
		if (arr[i] >  0)
			sum_positive += arr[i];
	}
	printf("\nSum positive numbers: %d",sum_positive);
	for (int i=0; i<N; i++){
		if (arr[i] >  0)
			printf("\nelement %d: %d",i,arr[i]);
	}
}
void printelementNegative(){
	int sum_negative = 0;
	for (int i=0; i<N; i++){
		if (arr[i] <  0)
			sum_negative += arr[i];
	}
	printf("\nSum negative numbers: %d",sum_negative);
	for (int i=0; i<N; i++){
		if (arr[i] <  0)
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
void printelementPrime(){
	int sum_prime = 0;
	for(i = 0; i < N; i++){
		if(isprime(arr[i]) == 1)
			sum_prime += arr[i];
	}
	printf("\nThe number of prime numbers: %d",sum_prime);
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
	printelementEven();
	printelementOdd();
	printelementPositive();
	printelementNegative();
	printelementPrime();
	return 0;
}
