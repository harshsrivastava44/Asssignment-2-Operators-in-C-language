//8. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
int x,res;
printf("Enter the number");
scanf("%d",x);
res=x&1;
if (res==1)

    printf("odd");


else
printf("even");

}