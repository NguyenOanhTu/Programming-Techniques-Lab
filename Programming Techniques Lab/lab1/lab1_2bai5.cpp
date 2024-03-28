#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, num, N = 0;
    printf("Enter a string of numbers: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
    	num = str[i] - 48;
    	N = N * 10 + num;
	}
    printf("\nNumber: %d", N);
    
    return 0;
}
