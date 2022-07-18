/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*/
#include<stdio.h>
int main()
{
    float INR;
    printf("enter the INR amount\n");
    scanf("%f",&INR);
    INR=INR/76.23;
    printf("the amount in usd is %f :",INR);
    return 0;



}