#include<stdio.h>
struct BOOK{
    char title[10];
    float price;
    int pages;
};
int main() {
	FILE *fWrite = fopen("Book.txt", "w");
	if(fWrite != NULL){
	struct BOOK b[100];
	int i, N;
	printf("Input number of books: ");
	scanf("%d", &N);
	fprintf(fWrite, "Number of books: %d\n", N);
	for(int i = 0; i < N; i++){
		printf("Input book title: ");
		fflush(stdin);
		gets(b[i].title);
		fflush(stdin);
		printf("Input book price: ");
		scanf("%f", &b[i].price);
		printf("Input number of pages: ");
		scanf("%d", &b[i].pages);
	}
	for(i = 0; i < N; i++)
		fprintf(fWrite,"\n%s:\t\t\t\t%d\t\t$%.1f", b[i].title, b[i].pages, b[i].price);
	fclose(fWrite);
	}
	else{
		printf("File open fail.");
	}
	FILE *fRead = fopen("Book.txt", "r");
	if(fRead != NULL){
	struct BOOK b[100];
	int i, N;
	fscanf(fRead,"%d", &N);
	printf("Number of books: %d\n", N);
//	fscanf(fRead,"%s\n", &b[i].title);
//	fscanf(fRead,"%d\n", &b[i].pages);
//	fscanf(fRead,"%.1f\n", &b[i].price);
//	for(i = 0; i < N; i++)
//		printf("\n%s:\t\t\t\t%d\t\t$%.1f", b[i].title, b[i].pages, b[i].price);
		fclose(fRead);
	}
	else{
		printf("File open fail.");
	}
	return 0;
}
