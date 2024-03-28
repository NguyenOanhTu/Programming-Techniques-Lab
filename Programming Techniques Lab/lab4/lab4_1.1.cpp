#include <stdio.h>
int factorial(int n)
{
	int f=1;
    if (n == 0)
    	f = 1;
    else
    	f= n * factorial(n - 1);
    return f;
}
int main()
{
    int n, f;
    printf("Input N: ");
    scanf("%d", &n);
    f = factorial(n);
    printf("factorial %d is: %d", n,f);
    return 0;
}
