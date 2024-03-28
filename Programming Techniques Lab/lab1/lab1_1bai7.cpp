#include <stdio.h>
int arr[100], N;
void inputN(){
	do{
		printf("Input N(size) of the array :\n");
		scanf("%d", &N);
	}
	while (N <= 0 || N >= 100);
}
void inputarray(){
	printf("Input N elements in the array :\n");
	for(int i = 0; i < N; i++){
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}
}
void printelement(){
	for(int i = 0; i < N; i++){
		printf("\nelement - %d : %d", i, arr[i]);
		
	}
}

void inserttheEnd(int newelement){
	arr[N++]=newelement;
}

void inserttheBegin(int newelement){
	
	for (int i=N; i>=0; i--)
		arr[i]=arr[i-1];
	arr[0]=newelement;
	 
}

void inserttheMid(int newelement){

	int mid=N/2;
	for (int i=N; i >= mid; i--)
		arr[i] = arr[i-1];	
	arr[mid] = newelement;
	
}

void insertPos(int newelement, int pos){

	for(int i=N; i>=pos; i--)
		arr[i]= arr[i-1];	
	arr[pos]= newelement;
	
}
int main()
{
	int newelement,pos;
	inputN();
	inputarray();
	printelement();
	printf("\ninput new element");
	scanf("%d", &newelement);
	printf("\nInsert the End: ");
	inserttheEnd(newelement);
	printelement();
	printf("\nInsert the Begin: ");
	inserttheBegin(newelement);
	printelement();
	printf("\nInsert the Mid: ");
	inserttheMid(newelement);
	printelement();
	printf("\nInsert Position: ");
	insertPos(newelement,pos);
	printelement();	
	return 0;
}
