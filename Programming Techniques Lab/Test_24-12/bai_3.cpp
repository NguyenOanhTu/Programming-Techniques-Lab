#include <stdio.h>
void DecimalToOctal(int n){
    if(n > 0){
        DecimalToOctal(n/8);
        printf("%d",n%8);
    }
}
int main()
{
    int n;
    printf("Enter a Decimal number: ");
    scanf("%d",&n);
    printf("Octal: ");
    DecimalToOctal(n);
    return 0;
}

