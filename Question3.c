//3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{

    int a,b,c;
    printf("\nEnter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("a= %d and b=%d \n",a,b);

    c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d",a,b);
    return 0;
}