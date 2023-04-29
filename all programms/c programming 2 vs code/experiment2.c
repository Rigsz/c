#include<stdio.h>


int main()
{
int line,i,n=0,b=0,c=2;
scanf("%d",&line);
for( i=1;i<=line*2;i++)
{
    for(int a=1;a<=line/2;a++)
    {
        printf("*");
    }
        for(int a=1;a<=line;a++)
    {
        if(i==(line*2)/2||i==(line*2)/2+1)
        printf("*");
        else
         printf(" ");
    }
        for(int a=1;a<=line/2;a++)
    {
        printf("*");
    }
    printf(" ");
for(int a=1;a<=line*2-i;a++)
{
    printf(" ");
}
for(int a=1;a<=line*i;a++)
{
    if(i==1)
    printf("*");
}
for(int a=1;a<=line/2;a++)
{if(i>=2)
    printf("*");
}
for(int a=1;a<=n;a++)
{
     if(i==(line*2)/2||i==(line*2)/2+1)
        printf("*");
        else
         printf(" ");
}
 n=n+2;
for(int a=1;a<=line/2;a++)
{if(i>=2)
    printf("*");
}
for(int a=1;a<=line/2;a++)
{
    printf(" ");
}
for(int a=1;a<=line*2-i;a++)
{
    printf(" ");
}
    for(int a=1;a<=line*2;a++)
    {
        if(i<=line/2-i)
        {
            printf("*");
        }
    }
    for(int a=1;a<=line/2;a++)
    {
                 if(i>=line/2-i&&i<(line*2)/2)
        {
            printf("*");
        }
    }
    for(int a=1;a<=line*2-(line/2)*2;a++)
    {
                if(i>=line/2-i&&i<(line*2)/2)
        {
            printf(" ");
        }
    }
        for(int a=1;a<=line/2;a++)
    {
                if(i>=line/2-i&&i<(line*2)/2)
        {
            printf("*");
        }
    }
        for(int a=1;a<=line*2;a++)
    {
        if(i==(line*2)/2||i==(line*2)/2+1)
        {
            printf("*");
        }
    }
    for(int a=1;a<=line*2;a++)
    {
        if(i>(line*2)/2+1&&a<=line/2)
        {
            printf("*");
        }
        else if(i>(line*2)/2+1)
        {
            printf(" ");
        }
    }
      printf("    ");
    for(int a=1;a<=line*2;a++)
    {
        if(i<=line/2-i)
        {
            printf("*");
        }
    }
    for(int a=1;a<=line/2;a++)
    {
                 if(i>=line/2-i&&i<(line*2)/2)
        {
            printf("*");
        }
    }
    for(int a=1;a<=line*2-(line/2)*2;a++)
    {
                if(i>=line/2-i&&i<(line*2)/2)
        {
            printf(" ");
        }
    }
        for(int a=1;a<=line/2;a++)
    {
                if(i>=line/2-i&&i<(line*2)/2)
        {
            printf("*");
        }
    }
        for(int a=1;a<=line*2;a++)
    {
        if(i==(line*2)/2||i==(line*2)/2+1)
        {
            printf("*");
        }
    }
    for(int a=1;a<=line*2;a++)
    {
        if(i>(line*2)/2+1&&a<=line/2)
        {
            printf("*");
        }
        else if(i>(line*2)/2+1)
        {
            printf(" ");
        }
    }
    printf("   ");
for(int a=1;a<=b;a++)
{
    if(i<=line)
printf(" ");
}
b=b+1;
for(int a=1;a<=line/2;a++)
{
      if(i<=line)
    printf("*");
}
for(int a=1;a<=line*2-c;a++)
{
         if(i<=line)
    printf(" ");
}
    c=c+2;
for(int a=1;a<=line/2;a++)
{
      if(i<=line)
    printf("*");
}
for(int a=1;a<=line;a++)
{
      if(i>line&&a>=line/2)
    printf("*");
    else if(a<line)
    printf("   ");
}
printf("\n");
}



return 0;
}