#include <stdio.h>
int main()
{
    char FirstName[20], MiddleName[20], LastName[20];
	 printf("Input full name: ");
     scanf("%s %s %s", FirstName, MiddleName, LastName);
     printf("Abbreviated name: ");
     printf("%c%c %s\n", FirstName[0], MiddleName[0], LastName);
     return 0;
}
