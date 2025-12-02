//string reverse
#include<stdio.h>
#include<string.h>
int main ()
{
    char name[] = "venkey";
    strrev(name);
    printf("string = %s\n",name);

    //user string reverse

    int n;
    printf("Enter Number = ");
    scanf("%d",&n);
    char rev[n];
    printf("Enter Your String = ");
    scanf("%s",&rev);
    strrev(rev);
    printf("string = %s\n",rev);
    
    return 0;
}
