#include<stdio.h>
int main()
{
    char str[80];
    int i=0, j, checkVowel;
    printf("Enter a String: ");
    gets(str);
    while(str[i]!='\0'){
        checkVowel=0;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            j=i;
            while(str[j-1]!='\0'){
                str[j] = str[j+1];
                j++;
            }
            checkVowel = 1;
        }
        if(checkVowel==0)
            i++;
    }
    printf("\nLine without vowels: %s", str);
    return 0;
}
