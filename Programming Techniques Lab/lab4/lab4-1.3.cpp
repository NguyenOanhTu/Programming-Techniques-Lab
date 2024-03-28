#include <stdio.h>
void Fibonacci(int n){
	static int n0= 0, n1= 1, n2;
	if(n>0){
		n2 = n1 + n0; n0 = n1; n1 = n2;
		printf("%d ",n2);
		Fibonacci(n-1);
	}
}
int main()
{
    int n;
    printf("Input N of elements: ");
    scanf("%d", &n);
    printf("Fibonacci sequence is: "); printf("%d ",1);
    Fibonacci(n-1);
    return
	 0;
}
