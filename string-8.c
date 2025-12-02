//strupr
#include<stdio.h>
#include<string.h>
int main ()
{
    char first[30];
    printf("Enter smaller letter  = ");
    scanf("%s",&first);

    strupr(first);
    printf("big letter = %s ",first);
    
    return 0;
}