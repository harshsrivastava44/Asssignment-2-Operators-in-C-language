/*13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
     int a,q,r;
    printf("input a three digit number  \n");
    scanf("%d",&a);
    q=a/10;
    r=a%10;
    a=r*100+q;
    printf("the number is %d :",a);
    return 0;
}