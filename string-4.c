//strcat
#include<stdio.h>
#include<string.h>
int main ()
{
    char name[] = "hello";
 
    char marks[] = "world";

    printf("string = %s\n ",strcat(name,marks));

    //user

    char first[40]; 
    printf("Enter Your First string : ");
    scanf("%s",&first);
    char secound[30];
    printf("Enter Your Secound String : ");
    scanf("%s",&secound);
    char third[40];
    strcat(first,secound);
    strcat(third,first);
    printf("result = %s\n",third);



    return 0;
}