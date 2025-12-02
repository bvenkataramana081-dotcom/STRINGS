#include<stdio.h>
int main ()
{
    //normal char
    char  ch = 'a';
    printf(" %c\n",ch);
 
    char name;
    printf("Enter sting = ");
    scanf("%c",&name);
    printf("sting = %c\n",name);

    //stings
     
    char sting[7] =  "venkey";
    printf("sting = %s\n",sting);

    //user
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    char num[n];
    printf("Enter Your Sting : ");
    scanf("%s",&num);
    printf("sting = %s",num);

    return 0;
}