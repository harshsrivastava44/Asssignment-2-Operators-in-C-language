/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int x=2345;
    printf(" the value of variable x is : %d\n",x);
    x=x/10;
    x=x*10;
    printf("the last digit of number in a variable as zero %d : ",x);
    return 0;



}