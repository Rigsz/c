/*
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void takinno()
{
int a;
printf("enter no");
scanf("%d",&a);
printf("no is %d",a);
}
void main()
{

takinno();

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void takinno(int a)
{

printf("enter no");
scanf("%d",&a);
printf("no is %d",a);
}
void main()
{
int a;
takinno(a);

}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int takinno(int a)
{
printf("enter 1st no");
scanf("%d",&a);
return a;
}
void main()
{
int a;
a=takinno(a);

printf("no is %d",a);
return 0;
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int takinno()
{
int a;
printf("enter no");
scanf("%d",&a);
return a;
}
int main()
{
int a;
a=takinno();
printf("the no is %d\n", a);
return 0;
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>



int maxnum(int a,int b,int c,int max)
{
max=(a>b?a>c?a:c:b>c?b:c);
return max;

}
int main()
{
    int a=3,b=4,c=2,max;
max=maxnum(a,b,c,max);
    printf("max no=%d",max);
    return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>

float maxnum(float a,float b,float c)
{  
return a>b?a>c?a:c:b>c?b:c;
}
int main()
{
float a,b,c,max;
printf("enter 3 num\n");
scanf("%f%f%f",&a,&b,&c);
max=maxnum(a,b,c);
printf("max no=%f",max);
return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int takinno(int a)
{
printf("enter 1st no");
scanf("%d",&a);
return a;
}
int takinno1(int b)
{
printf("enter 2nd no");
scanf("%d",&b);
return b;
}
int sum(int a,int b)
{ 
 a+b;
return a+b;
}
int main()
{
int a,b,c;
c=takinno(a);
b=takinno1(b);
sum(a,b);
printf("sum=%d",c+b);

return 0;

}
*/

/////////////////////////////////////////////////////////////////////////////////////////

/*

#include<stdio.h>
float maxnum(float a,float b,float c)
{
if(a>b)
return a;
else if(a>c)
return a;
else if(b>c)
return b;
else
return c;
}
int main()
{
    float a=3.40,b=3.41,c=3.42,max;
max=maxnum(a,b,c);
    printf("max no=%f",max);
    return 0;
}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>

int evod()
{
int ev=0,num=10,i;
for(i=1;i<=num;i++)
{
if(i%2==0)
{
    ev++;
}
}
return ev;
}
int evod1()
{
int odd=0,num=10,i;
for(i=1;i<=num;i++)
{
if(i%2!=0)
{
   odd++;
}
}
return odd;

}
int main()
{
int ev,odd,num=10,i;
ev=evod();
odd=evod1();
printf("even=%d,odd=%d",ev,odd);
return 0;

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
#include<stdio.h>
int logical(int a,int b)
{
if(a==3&&b++)
return a;
else
return b;
}
int main()
{
int a=1,b=6,c;
c=logical(a,b);
printf("%d",c);
return 0;

}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int nam(char name[],int age)
{
printf("ur name is %s\n",name);
printf("ur age is %d\n",age);
}
int main(int argc, char **argv)
{
    char name[]="shirshendu sarkar";
    int age=18;
    nam(name,age);
    return 0;
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int frog(int num,int i)
{
int total=0;
for(i=0;i<=num;i++)
{
    total=total+i;
}
return total;
}
int main(int argc, char* argv[])
{
int num,i,total;
printf("\nEnter ur number\n");
scanf("%d",&num);
total=frog(num,i);
printf("%d",total);
    return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void arm(int num,int r,int temp)
{
int i=0;
temp=num;
while(temp!=0)
{
r=temp%10;
i=i+(r*r*r);
temp=temp/10;
}
if(i==num)
{
printf("armstrong no");
}
else
{
printf("not an armstrong no");
}

}

void main()
{
int num,i,r,temp;
printf("\nenter a armstromg no if u want to see the next morning\n");
scanf("%d",&num);
arm(num,r,temp);
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void arm()
{
int i=0,num,r,temp;
temp=num;
while(temp!=0)
{
r=temp%10;
i=i+(r*r*r);
temp=temp/10;
}
if(i==num)
{
printf("armstrong no");
}
else
{
printf("not an armstrong no");
}
}

void main()
{
int num,i,r,temp;
printf("\nenter a armstromg no if u want to see the next morning\n");
scanf("%d",&num);
arm();
}
//without argument without return
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int digit(int num)
{
  int count=0;
while(num!=0)
{
  num=num/10;
count++;
}
return count;
}
int main()
{
int num,count;
printf("enter any no\n");
scanf("%d",&num);
count= digit(num);
printf("digits=%d",count);
return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int arm(int num,int r,int temp)
{
int i=0;
temp=num;
while(temp!=0)
{
r=temp%10;
i=i+(r*r*r);
temp=temp/10;
}
if(i==num)
{
printf("armstrong no");
}
else
{
printf("not an armstrong no");
}
return 0;
}

int main()
{
int num,i,r,temp;
printf("\nenter a armstromg no if u want to see the next morning\n");
scanf("%d",&num);
arm(num,r,temp);
return 0;
}
//with return with argument
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
float loop(int i,int x)
{
    float s=0;
for(i=1;i<=x;i++)
{
    if(i%2==0)
    {
        s=s-(float)i/x;
    }
    else
    {
        s=s+(float)i/x;
    }
}
return s;
}
int main(int argc, char **argv)
{
int i,x;
float s;
printf("enter no");
scanf("%d",&x);
s=loop(i,x);
printf("%f",s);
return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
float loop(float num,float i)
{
float s=0,a=1;
for(i=1;i<=num;i++)
{
s=s+a/i;
}
return s;
}
int main()
{
float num,i,s=0,a=1;
printf("enter no");
scanf("%f",&num);
s=loop(num,i);
printf("%f",s);
return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
float fun(float num,float i,float x,float m)
{
float s=0,k=1;
for(i=2;i<=num;i++)
{
k=k*i;
m=x/k;
printf("%f\n",m);
s=s+m;
}   
return s;
}
int main()
{
float num,s,i,x,k,m;
printf("enter value of x");
scanf("%f",&x);
printf("enter amount of num");
scanf("%f",&num);
s=fun(num,i,x,m);
printf("\nsum=%f",s+1);
return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int per(int num,int i,int ran,int a)
{
  int m=0;
for(a=num;a<=ran;a++)
{  
m=0;
for(i=1;i<a;i++)
{   
if(a%i==0)
{
    m=m+i;
}
}
if(m==i)
      {
 printf("perfect nums%d\n",a);
      }
}
return 0;
}

int main()
{
int num,i,a,ran;
printf("enter first range number");
scanf("%d",&num);
printf("enter sec range number");
scanf("%d",&ran);
a=per(num,i,ran,a);
return 0;
}
*/
/*
. Write a c program to find the perfect numbers within a given number of range. 
Test Data :
Input the starting range or number : 1
Input the ending range of number : 50
Expected Output :
The Perfect numbers within the given range : 6 28
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
char alpha(char num)
{
if(num>=65&&num<=90)
{
    return (num+32);
}
else if(num>=97&&num<=122)
{
    return (num-32);
}
}
int main()
{
char num;
printf("enter alphabate");
scanf("%c",&num);
num=alpha(num);
printf("%c",num);

return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
