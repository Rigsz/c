#include<stdio.h>
int main()
{
    int lines,a[3],i,s,m,j;
    printf("amount of lines");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }
        m=a[1]-a[0];
        s=a[0]+(a[1]-1)*m;
        printf("%d\n",s);
        if(s==a[2])
        {
            if(a[0]>=1&&a[2]<=100000000)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}