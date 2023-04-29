#include<stdio.h>
#include<math.h>
int main()
{
int num,x,count=0,i;
printf("enter num");
scanf("%d",&num);
int temp=num;
int k[50];
while(temp!=0)
{
    temp/=10;
    count++;
}
temp=num;
for(i=count-1;i>=0;i--)
{
    x=temp%10;
    k[i]=x;
    temp/=10;
}
int s=0,h=0,a;
k[count]=0;
while(s<=num)
{
    for(i=h;i<=count;i++)
    {
        if(i<count)
        {
        s=s+k[i];
            printf("%d+\t",k[i]);
        }
    }
    k[count]=s;
    h=h+1;
    count+=1;
    printf("\n%d\n%d\n",s,k[count]);
}
k[count]=0;
while(s<=num)
{
    for(i=h;i<=count;i++)
    {
        if(i<count)
        {
        s=s+k[i];
        a=s;
            printf("%d+\t",k[i]);
        }
        else
        {
            s=s-k[count];
            k[count]=a;
        }
    }
    h=h+1;
    count+=1;
    printf("\n%d\n%d\n%d\n",s,k[count],a);
}
return 0;
}
//1104