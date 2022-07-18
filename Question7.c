//7. Write a program to find the position of first 1 in LSB.
#include<stdio.h>

int main()
{
    int x=11,count=0,res=0;
    while (x != 0)
    {
    res = x&1;
    count++;
    if (res ==1)
    {
      printf("%d",count);
      break;
    }
    x=x>>1;
    }
    return 0;
}