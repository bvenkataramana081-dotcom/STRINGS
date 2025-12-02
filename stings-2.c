//strlen
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    char name[] = "venkey";
    char length = strlen(name);
    printf("sting = %d\n",length);

    //user 

    int n;
    printf("Enter Your Number  = ");
    scanf("%d",&n);
    char str[n];
    printf("Enter Your String : ");
    scanf("%s",&str);
    char num = strlen(str);
    printf("Length = %d\n",num);
   
    //using dma

    int a;
    printf("Enter Number : ");
    scanf("%d",&a);
    char *arr = (char *) malloc(n*sizeof(char));
    printf("enter your sting = ");
    scanf("%s",&arr);
    gets(arr);
    int ch = strlen(arr);
    printf("length1 = %d\n",ch);

    return 0;
}