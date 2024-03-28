#include <stdio.h>
#include<stdlib.h>
struct student {
    char name[50];
    char cl;
    int phone;
    float marks;
};
void inputNstudent(int &n){
	printf("Input number of student: ");
	scanf("%d", &n);
}
void inputstudent(struct student *T, int i){
	printf("Input name: ");
	fflush(stdin);
	gets((T+i)->name);
	fflush(stdin);
	printf("Input class: ");
	scanf("%s",&(T+i)->cl);
	printf("Input phone: ");
	scanf("%d", &(T+i)->phone);
	printf("Input mark: ");
	scanf("%f", &(T+i)->marks);
}
void outputstudent(struct student *T, int i){
	printf("Name: %s\n", (T+i)->name);
	printf("Class: %s", (T+i)->cl);
	printf("Phone: %d\n", (T+i)->phone);
	printf("Mark: %f\n", (T+i)->marks);
}
int main() {
	struct student *T;
    int i, n ;
    inputNstudent(n);
   	T = (struct student *)malloc(n*sizeof(struct student));
   	for(i = 0; i < n; i++)
		inputstudent(T, i);
	printf("Information of students");
	for(i = 0; i < n; i++)
		outputstudent(T, i);
    return 0;
}

