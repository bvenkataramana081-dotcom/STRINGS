//strcpy
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    char first[40];
    printf("Enter string First = ");
    scanf("%s",&first);
    char secound[40];
    printf("Enter string secound ");
    scanf("%s",&secound);

    strcpy(first,secound);
    printf("string = %s\n",first);

    return 0;
}
