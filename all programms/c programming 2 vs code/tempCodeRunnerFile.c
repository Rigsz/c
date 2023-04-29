#include<stdio.h>
int prime(int num)
{
    static int count=0,temp=1;
    if(temp<=num/2)
    {
    if(num%temp==0)
    count++;
    temp++;
    return prime(num);
    }
    else
    return count;
    }

int main()
{
    int num,count,o;
    printf("enter a number");
    scanf("%d",&num);
    count=prime(num);
    if(count == 1)
    {
        printf("%d a prime no",num);
    }
    else
    {
        printf("%d not a prime no",num);
    }
    return 0;
}