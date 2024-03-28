#include <stdio.h>
struct BOOK{
    char title[10];
    float price;
    int pages;
};

void inputBOOK(struct BOOK &book){
	printf("Input book title: ");
	fflush(stdin);
	gets(book.title);
	fflush(stdin);
	printf("Input book price: ");
	scanf("%f", &book.price);
	printf("Input number of pages: ");
	scanf("%d", &book.pages);
}

void outputBOOK(struct BOOK book){
	printf("\n%s:\t\t\t\t%d\t\t$%.1f", book.title, book.pages, book.price);
}

int main(){
	struct BOOK b[100];
	int i, N;
	do{
		printf("Input number of books: ");
		scanf("%d", &N);
	}while(N <0 || N>100);
	for(i = 0; i < N; i++)
		inputBOOK(b[i]);
	printf("Name\t\t\t\tPages\t\tPrice");
	for(i = 0; i < N; i++)
		outputBOOK(b[i]);
	int max = b[0].price;
	int position = 0;
	for(int i = 1; i < N; i++){
		if(b[0].price > max)
			position = i;
	}
	printf("\nThe most expensive book is %s",b[position].title);
	return 0;
}
