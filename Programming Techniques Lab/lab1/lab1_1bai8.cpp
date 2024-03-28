#include <stdio.h>
int arr[100], N;
void inputN(){
	do
	{
		printf("Input N(size) of the array :\n");
		scanf("%d", &N);
	}
	while (N <= 0 || N >= 100);
}
void inputarray(){
	printf("Input N elements in the array :\n");
	for(int i = 0; i < N; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}
}
void printelement(){
	for(int i = 0; i < N; i++)
	{
		printf("\nelement - %d : %d", i, arr[i]);
		
	}
}

void deletetheEnd(int deleteelement){
	arr[N--]=deleteelement;
}

void deletetheBegin(int deleteelement){
	
	for (int i=0; i<N-1; i++)
		arr[i]=arr[i-1];
	
	arr[0]=deleteelement;
	
}

void deletetheMid(int deleteelement){

	int mid=N/2;
	for (int i=N; i<N-1; i++)
		arr[i] = arr[i-1];
	
	arr[mid] = deleteelement;
	
}

void deletePos(int deleteelement, int pos){

	for(int i=N; i<pos-1; i++)
		arr[i]= arr[i-1];
	
	arr[pos]= deleteelement;
	
}
int main()
{
	int deleteelement,pos;
	inputN();
	inputarray();
	printelement();
	printf("\nInput delete element");
	scanf("%d", &deleteelement);
	printf("\ndelete the End: ");
	deletetheEnd(deleteelement);
	printelement();
	printf("\ndelete the Begin: ");
	deletetheBegin(deleteelement);
	printelement();
	printf("\ndelete the Mid: ");
	deletetheMid(deleteelement);
	printelement();
	printf("\ndelete Position: ");
	deletePos(deleteelement,pos);
	printelement();	
	return 0;
}
