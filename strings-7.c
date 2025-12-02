//strlwr
#include<stdio.h>
#include<string.h>
int main ()
{
    char first[30];
    printf("Enter big letter string : ");
    scanf("%s",&first);
    strlwr(first);

    printf("small letter string = %s ",first);
    
    return 0;
}