/*
county library system
by wonte dula
Feb 2022
MIT LICENSE
C99 COMPILER
*/

#include <stdio.h>
#include <stdlib.h>

void menu () {
printf(select an option below\n);
printf ("1. add new  patron\n");
printf(" 2. view all patrons\n");
printf("3. add new resources\n");
printf("4. view all resources \n");
printf("your ation: ");
scanf("%d",&action);
return action;
}
int main()
{
    int action;
    printf("county library system);
    printf("welcome wonte\n")
   action= menu();
   primtf ("you selected action %d\n",action);
    return 0;
}
