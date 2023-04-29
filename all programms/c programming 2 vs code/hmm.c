/*
#include<stdio.h>
int main()
{   
    int a[50],i,j,amo,temp;
    printf("enter the amount of number\n");
    scanf("%d",&amo);
    printf("now enter the numbers\n");
    for(i=0;i<amo;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<amo;i++)
    {
        for(j=i;j<amo-1;j++)
        {
            if(a[i]>a[j+1])
            {
                temp=a[i];
                a[i]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<amo;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int a[50],b[50],amo,amo1,c[50],i,m=0,j,temp;
    printf("enter the amount in 1st array");
    scanf("%d",&amo);
    for(i=0;i<amo;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the amount in 2nd array");
    scanf("%d",&amo1);   
    for(i=0;i<amo1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<amo+amo1;i++)
    {
        if(i<amo)
        {
        for(j=i;j<amo;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
            for(j=0;j<amo1;j++)
            {
            if(a[i]>b[j])
            {
                temp=a[i];
                a[i]=b[j];
                b[j]=temp;
            }
            }
            c[i]=a[i];
        }
        else
        {    
            for(j=m;j<amo1-1;j++)
            {
            if(b[j]>b[j+1])
            {
                temp=b[m];
                b[m]=b[j+1];
                b[j+1]=temp;
            }               
            }
            c[i]=b[m];
            m++;
        }
    }
    for(i=0;i<amo+amo1;i++)
    {
        printf("%d\t",c[i]);
    }

}
