#include<stdio.h>
#include<string.h>
3. int main()
4. {
5. struct part
6. {
7. char partname[50];
8. int partnumber;
9. };
10. struct part p, *ptrp;
11. ptrp = &p;
12. strcpy(p.partname, "CrankShaft");
  p.partnumber = 1010123;Programming Techniques – Lab 02 P a g e | 2 Ths. Ngô Th? Ng?c Th?m
14. printf("%s %d\n", p.partname, p.partnumber);
15. printf("%s %d\n", (*ptrp).partname, (*ptrp).partnumber);
16. printf("%s %d\n", ptrp->partname, ptrp->partnumber);
17. return 0;
18. }
