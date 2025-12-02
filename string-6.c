//strcmd
#include<stdio.h>
#include<string.h>
int main ()
{
    char first[30];
    printf("ENTER FIRST STRING : ");
    scanf("%s",&first);
    char secound[30];
    printf("ENTER SECOUND STRING : ");
    scanf("%s",&secound);

    int result = strcmp(first,secound);
    if(result == 0)
    {
        printf("two string are equal ");
    }
    else
    {
        printf("two strings are not equal ");
    }
    
    return 0;
}