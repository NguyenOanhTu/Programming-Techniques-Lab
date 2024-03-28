#include <stdio.h>
#include<stdlib.h>
struct BOOK{
    char title[10];
    float price;
    int pages;
};

void inputNumberBook(int &N){
	do{
		printf("Input number of books: ");
		scanf("%d", &N);
	}while(N <0 || N>100);
}
void inputBOOK(struct BOOK *B, int i){
	printf("Input book title: ");
	fflush(stdin);
	gets((B+i)->title);
	fflush(stdin);
	printf("Input book price: ");
	scanf("%f", &(B+i)->price);
	printf("Input number of pages: ");
	scanf("%d", &(B+i)->pages);
}

void outputBOOK(struct BOOK *B, int i){
	printf("\n%s:\t\t\t\t%d\t\t$%.1f", (B+i)->title,(B+i)->pages,(B+i)->price);
}

int main(){
	struct BOOK *B;
	int i, N = 2;
	inputNumberBook(N);
	B = (struct BOOK *)malloc(N*sizeof(struct BOOK));
	for(i = 0; i < N; i++)
		inputBOOK(B, i);
	printf("Name\t\t\t\tPages\t\tPrice");
	for(i = 0; i < N; i++)
		outputBOOK(B, i);
	int max = (B+i)->price;
	int position = 0;
	for(int i = 1; i < N; i++){
		if((B+i)->price > max)
			position = i;
	}
	printf("\nThe most expensive book is %s",(B+position)->title);
	free(B);
	return 0;
}
