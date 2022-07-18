/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int a,digit,result;
    printf("input a number and digit \n");
    scanf("%d %d",&a,&digit);
    result=a*10+digit;
    printf("the resulting is %d",result);
    return 0;

}