#include <stdio.h>
#include <string.h>
void to_lower(char s[]){
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
}
void to_upper(char s[]){
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
}
int main()
{
    char s[20];
    int i;
    printf("\nEnter a string : ");
    gets(s);
    to_lower(s);
    printf("\nString in Lowercase = %s", s);
    to_upper(s);
    printf("\nString in Uppercase = %s", s);
    return 0;
}
