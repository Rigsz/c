/*
#include<stdio.h>
int main(int argc, char **argv) 
{
int i,num,s=0;
printf("enter any no");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    s=s+i;
}
printf("%d",s);
return 0;
}
*/
/////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main(int argc, char **argv) 
{
int i,num,s=0;
printf("enter any no");
scanf("%d",&num);
for(i=1;i<=num;i+++i++)
{
    s=s+i;
}
printf("%d",s);
return 0;
}
//this is for output like 1+3+5+....+n(means summation of odd num)
*/
/////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main(int argc, char **argv) 
{
int i,num,s=0;
printf("enter any no");
scanf("%d",&num);
for(i=2;i<=num;i+++i++)
{
    s=s+i;
}
printf("%d",s);
return 0;
}
//for summation of even num
*/
//////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv) 
{
int i,num,s=0;
printf("enter any no");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
  s=s+pow(i,3)-1;
}
  printf("%d\n",s);
return 0;
}
//if u gib 3 in output it will do (1*1*1)-1+(2*2*2)-1+(3*3*3)-1+.....(n*n*n)-1and pow means power.[power only take %f means float..if u want int value do explicit type casting(not sure abt that tho)]
*/
////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv) 
{
int a=0,b=1,c,i,num;
printf("enter any no");
scanf("%d",&num);
printf("%d\t%d\t",a,b);
for(i=1;i<=num;i++)
{
  c=a+b;
printf("%d\t",c);
a=b;
b=c;

}
return 0;
}
//output will be 0 1 1 2 3 5 8..n( 0+1=1, 1+1=2,1+2=3, 2+3=5), this is call Fibonacci series.
*/
//////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv) 
{
int a=0,b=1,c,i,num;
printf("enter any no");
scanf("%d",&num);
printf("%d\t%d\t",a,b);
for(i=1;i<=num;i++)
{
  c=a+b;
  if(c>num)
printf("%d\t",c);
a=b;
b=c;

}
return 0;
}
//this is call Fibonacci series.but its just if u give 8 that will show between every fibonacci no between 8.
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv) 
{
int a=2,b=3,c=4,d,i,num;
printf("enter any no");
scanf("%d",&num);
printf("%d\t%d\t%d\t",a,b,c);
for(i=4;i<=num;i++)
{
  d=a+b+c;
  if(d<=num)
printf("%d\t",d);
a=b;
b=c;
c=d;
}
return 0;
}
//output like 2,3,4,9,16,29...n(2+3+4=9,3+4+9=16,4+9+16=29).if u give 10 in output it will show that type of no till the output hit num 10.
*/
////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv) 
{
int s=0,i,num;
printf("enter any no");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
s=s+pow(i,i);
printf("%d\t",s);
}
return 0;
}
//output 1^1+2^2+3^3....n^n
*/
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv) 
{
int i,x;
float s=0.0;
printf("enter no");
scanf("%d",&x);
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
printf("%f",s);
return 0;
}
//output like s=1/x-2/x+3/x-4/x+5/x-...n/x
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
float num,i,s=0,a=1;
printf("enter no");
scanf("%f",&num);
for(i=1;i<=num;i++)
{
s=s+a/i;
}
printf("%f",s);
return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,s=1,i,a=1;
printf("enter no");
scanf("%d",&num);
while(a<=num)
{
   
for(i=1;i<=10;i++)
{
s=a*i;
printf("%d\t",s);
}
a=++a;
}
return 0;
} 
//table multiplication
*/
////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<math.h>
#include<stdbool.h>
#include<stdio.h>
int main()
{
int a,i,line,s=1,c=1;
printf("enter ur pyramid no");
scanf("%d",&line);
for(a=1;a<=line;a++)
{
for(i=1;i<=a;i++)
{
printf("%d",s++);
}
printf("\n");

}
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
int a=1,i,line,s=0,c=1;
printf("enter ur pyramid no");
scanf("%d",&line);
while(a<=line)
{
for(i=1;i<=a;i++)
{
s=c+s;
printf("%d",s);
}
printf("\n");
a=a+1;
}
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
float x,i,s=0,a=1,num,r=1;
printf("enter no");
scanf("%f",&x);
printf("enter num");
scanf("%f",&num);
for(i=1;i<=num;i++)
{
r=r*i;    
a=i/r;
s=s+pow(x,a);
}
printf("%f",s);
return 0;
}
//output : x+x^2/2!+x^3/3!+....
*/
////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
    int main(){
        float x,num,i,fac=1,powe,answ,sum=0;
        printf("enter the value of x: \n"); 
        scanf("%f",&x);
        printf("enter the number \n");
        scanf("%f",&num);

           for(i=1;i<num;i++){
               fac=(fac*i);
               answ=pow(x,i);
               powe=answ/fac;
               printf("\n%f",powe);
               sum=sum+powe;
        }

        printf("\n1+%.0f^1 /1!+%.0f^2 /2!+%.0f^3 /3!+...+%.0f^%.0f /%.0f! =%f",x,x,x,x,num,num,sum+1);


        return 0;

    }
	*/
	//////////////////////////////////////////////////////////////////////////////////////////
  /*
  #include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,b=1,i,x=1;
printf("enter line no");
scanf("%d",&line);
printf("%d\n",b);
while(x<=line)
{
for(i=1;i<=x;i++)
{
if(x%2!=0)
{
printf("%d%d",a,b);
}
else
{
    printf("%d%d",b,a);
}
}
printf("\n");
x=x+1;

}
}
//output :1   01   1010    010101 ...
*/
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,b=1,i,x=1,m=0;
printf("enter line no");
scanf("%d",&line);
while(x<=line)
{
for(i=1;i<=x;i++)
{
if(i%2==0)
printf("%d",b);
else
printf("%d",a);
}
printf("\n");
x=x+1;

}
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
int num,s=0,i,a,d,ok;
printf("enter neon no");
scanf("%d",&num);
a=num*num;
while(a!=0)
{
ok=a%10;
s=s+ok;
a=a/10;
}
if(s==num)
{
    printf("neon no");
}
else
{
    printf("not neon no");
}
return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
    int count;
float num,s=0,i,x,k=1,m;
printf("enter value of x");
scanf("%f",&x);
printf("enter amount of num");
scanf("%f",&num);
for(i=2;i<=num;i++)
{
k=k*i;
m=x/k;
count++;
printf("value in %d round: %.0f/%.0f=%0.5f.\t",count,x,k,m);
s=s+m;
}
printf("\nsum=%f",s+1);
return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a,b,i,x=1;
printf("enter line no");
scanf("%d",&line);
while(x<=line)
{
    if(x%2==0)
{
a=1,b=0;
}
else
{
a=0,b=1;
}
for(i=1;i<=x;i++)
{
if(i%2==0)
printf("%d",a);
else
printf("%d",b);
}
printf("\n");
x=x+1;
}
return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
int num,i,a=1,x=1,p=1;
printf("enter ur line num");
scanf("%d",&num);
for(i=1;i<num;i++)
{
a=a*10;
x=x+a;
printf("numbers=%d\n",x);
p=p+x;
}
printf("sum=%d\n",p);
return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,x,s=0,a=1,m;
printf("enter ur value of X");
scanf("%d",&x);
printf("enter ur amount");
scanf("%d",&num);
printf("numbers=\n%d\n",x);
s=s+x;
for(i=1;i<num;i++)
{
a=a+2;
m=pow(x,a);
if(i%2!=0)
{
s=s-m;
printf("%d\n",s);
}
else
{
    s=s+m;
    printf("%d\n",s);
}
}
printf("sum=%d",s);
return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,s,m=0,a=0,w;
printf("enter number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
a=a+1;    
if(num%a==0)
{
    s=num/a;
    m=m+a;
}
}
printf("sum=%d",m);
if(m==num)
      {
        printf("\n the number is perfect divisor");
      }
    else
    {
      printf("\nthe number is not perfect divisor");
    }
return 0;
}
*/
//perfect divisor like 28=1+2+4+7+14
//Test Data :
//Write a c program to check whether a given number is a perfect number or not. 
//Input the number : 56
//Expected Output :
//The positive divisor : 1 2 4 7 8 14 28
//The sum of the divisor is : 64
//So, the number is not perfect.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,s=0,a=1,count=1;
printf("enter ur prime no");
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
{
    count++;
}
}
if(count==2)
{
    printf("its a prime no");
}
else
{
    printf("its not a prime no");
}

return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,s=0,a,count=1;
printf("enter ur prime no");
scanf("%d",&num);
while(num!=0)
{
a=num%10;
s=a;
printf("%d",s);
num=num/10;
}
return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int i,a=100,s=0;
for(a=100;a<=200;a++)
{
if(a%9==0)
{
    printf("%d\t",a);
    s=s+a;
}
}
printf("\nsum=%d",s);
return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,s,m=0,a=0,w,ran;
printf("enter first range number");
scanf("%d",&num);
printf("enter sec range number");
scanf("%d",&ran);
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
        printf("the perfect num=%d\n",a);
      }

}
return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<math.h>
#include<stdio.h>
int main()
{ 
int num;
printf("enter ugly number");
scanf("%d",&num);
if(num%2==0)
{
printf("%dis an ugly no :(",num);  
}
else if(num%3==0)
{
  printf("%dis an ugly no :(",num);
}
else if(num%5==0)
{
  printf("%dis an ugly no :(",num);
}
else if(num%7==0)
{
  printf("%dis an ugly no :(",num);
}
else
{
  printf("%d is not an ugly no",num);
}
return 0;
}
*/
//.Write a program in C to check whether a given number is an ugly number or not. Go to the editor
//Expected Output :
//Input an integer number: 25
//It is an ugly number.(the numbers , can divisible by 2,3,5,7)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<math.h>
#include<stdio.h>
int main()
{ 
int num,i,s=0;
printf("enter abundent no");
scanf("%d",&num);
for(i=1;i<num;i++)
{
  if(num%i==0)
  {
    s=s+i;
  }
}
if(s>num)
{
  printf("%d is an abundant num",num);
}
else
{
  printf("%d is not an abundant num",num);
}
return 0;
}
*/
//Write a program in C to check whether a given number is Abundant or not.
//Expected Output :
//Input an integer number: 18
//The number is Abundant.(if the sum of the factorials of the number is bigger than the number itself then its a abundant num)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<math.h>
#include<stdio.h>
int main()
{ 
int num,num1,i,s=0;
printf("enter 1st no range");
scanf("%d",&num);
printf("enter 2nd no range");
scanf("%d",&num1);
while(num<=num1)
{  
  s=0;
for(i=1;i<num;i++)
{
  if(num%i==0)
  {
    s=s+i;
  }
}
if(s>num)
{
  printf("%d is an abundant num\n",num);
}
num=num+1;
}
return 0;
}
*/
//Write a program in C to find the Abundant numbers (integers) between 1 to 1000. Go to the editor
//Expected Output :
//The Abundant number between 1 to 1000 are:
//12 18 20 24 30 36 40 42 48 54 56 60 66 70 72 78 80...
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<math.h>
#include<stdio.h>
int main()
{ 
int num,num1,i,s=0;
printf("enter 1st no range");
scanf("%d",&num);
printf("enter 2nd no range");
scanf("%d",&num1);
while(num<=num1)
{  
  s=0;
for(i=1;i<num;i++)
{
  if(num%i==0)
  {
    s=s+i;
  }
}
if(s<num)
{
  printf("%d is a Deficient num\n",num);
}
num=num+1;
}
return 0;
}
*/
//Write a program in C to find the Deficient numbers (integers) between 1 to 100. Go to the editor
//Expected Output :
//The Deficient numbers between 1 to 100 are:
//1 2 3 4 5 7 8 9 10 11 13 14 15 16 17 19 21 22 23 25 26 27..
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*//
#include<math.h>
#include<stdio.h>
int main()
{ 
int num,i,s=0,a,m,count=0,l,n=10;
printf("enter Kaprekar number");
scanf("%d",&num);
a=pow(num,2);
printf("%d\n",a);
while(a>0)
{
m=a%10;
count++;
a=a/10;
}
if(count>=3)
{
for(i=3;i<=count;i=i+2)
{
n=n*10;
}
}
if(count>=3)
{
  a=pow(num,2);
  while(a>0)
{
m=a%n;
printf("%d\n",m);
a=a/n;
s=s+m;
}
}
if(s==num)
{
  printf("%d is a Kaprekar number",num);
}
else
{
  printf("%d is not a Kaprekar number",num);
}
return 0;
}
*/
// Write a program in C to check whether a given number is a Kaprekar number or not. Go to the editor
//Expected Output :
//Input a number: 45
//45 is a Kaprekar number.(kaprekar numbers are take a no and square that and take the square no divide the no into two part and then sum two part and if the sum =the first no)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<math.h>
#include<stdio.h>
int main()
{ 
int num,i,s=0,count=0,temp,a,m=1,n,x,y,z=0;
printf("enter a lychrel number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
a=temp%10;
count++;
temp=temp/10;
}
temp=num;
for(i=1;i<=count;i++)
{
  a=temp%10;
s=s*10+a;
temp=temp/10;
}
printf("reverse no=%d\n",s);
x=num+s;
n=x;
while(n!=0)
{
  y=n%10;
 z=z*10+y;
 n=n/10;
}
if(z!=x)
{
printf("%d is a lychrel number",num);
}
else
{
  printf("%d is not a lychrel number",num);
}
return 0;
}
//Write a program in C to check whether a number is Lychrel number or not. Go to the editor
//Expected Output :
//Input a number: 196
//The given number is Lychrel.(196+691= 887)
or ANOTHER METHOD
#include<math.h>
#include<stdio.h>
int main()
{ 
int num,i,s=0,count=0,temp,a,m=1,n=1,x,y,z=0,u;
printf("enter a lychrel number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
a=temp%10;
count++;
temp=temp/10;
}
for(i=1;i<count;i++)
{
n=n*10;
}
temp=num;
for(m=1;m<=count;m++)
{
for(i=1;i<2;i++)
{
a=temp%10;
a=a*n;
s=s+a;
temp=temp/10;
}
n=n/10;
}
printf("reverse no=%d\n",s);
x=num+s;
u=x;
while(u!=0)
{
  y=u%10;
 z=z*10+y;
 u=u/10;
}
if(z!=u)
{
printf("%d is a lychrel number",num);
}
else
{
  printf("%d is not a lychrel number",num);
}
return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,i,s=0,a;
printf("enter a happy number");
scanf("%d",&num);
temp=num;
for(i=1;i<=num;i++)
{
while(temp!=0)
{
s=0;
a=temp%10;
s=s+pow(a,2);
temp=temp/10;
}
temp=s;
}
if(s==1)
{
    printf("%d is a happy number",num);
}
else
{
       printf("%d is not a happy number",num); 
}
return 0;
}
 //Write a program in C to check a number is a Happy or not. Go to the editor
//Expected Output :
//Input a number: 13
//13 is a Happy number(take a happy number 13...1^2+3^2=10,1^2+0^2=1)
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,i,s=0,a,count=0,x,m;
printf("enter a disarium no");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
a=temp%10;
count++;
temp=temp/10;
}
x=count;
temp=num;
for(i=1;i<=count;i++)
{
for(m=1;m<=1;m++)
{
a=temp%10;
s=s+pow(a,x);
printf("%d\n",s);
temp=temp/10;
}
x=x-1;
}
if(s==num)
{
    printf("%d is a disarium number",num);
}
else
{
     printf("%d is not a disarium number",num);
}
return 0;
}
//Write a program in C to check whether a number is Disarium or not. Go to the editor
//Expected Output :
//Input a number: 135(1^1+3^2+5^3=135)
//The given number is a Disarium Number.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,s=0,a;
printf("enter a harshad number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
    a=temp%10;
    s=s+a;
    temp=temp/10;
}
if(num%s==0)
{
    printf("its a harshad number");
}
else
{
    printf("its not a harshad number");
}
return 0;
}
//Write a program in C to check if a number is Harshad Number or not. 
//Expected Output :
//Input a number: 12(1+2=3.....12/3=4)
//The given number is a Harshad Number.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,temp,s=0,a;
printf("enter a pronic number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
    a=num/i;
}
if(++i==a)
{
    printf("%d is a pronic number",num);
    break;
}
}
return 0;
}
//Write a program in C to check whether a number is a Pronic Number or Heteromecic Number or not. 
//Expected Output :
//input a number: 132(11*11+1=132)
//The given number is a Pronic Number
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,temp,s=0,a,b,c,count=0,x=0;
printf("enter an Automorphic Number");
scanf("%d",&num);
temp=pow(num,2);
a=num;
while(a!=0)
{
b=a%10;
count++;
x=x*10+b;
a=a/10;
}
for(i=1;i<=count;i++)
{
    c=temp%10;
    s=s*10+c;
    temp=temp/10;
}
if(s==x)
{
    printf("%d is an Automorphic Number",num);
}
else
{
    printf("%d is not an Automorphic Number",num);
}
return 0;
}

//Write a program in C to check if a number is Authomorphic or not.
//Expected Output :
//Input a number: 76  {76^2=57(76)=76}
//The given number is an Automorphic Number.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,temp,s=0;
printf("enter a duck number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
i=temp%10;
if(i==0)
{
    printf("%d is a duck number",num);
    break;
}
temp=temp/10;
}
if(temp==0)
{
    printf("%d is not a duck number",num);
}
return 0;
}
 //Write a program in C to check whether a number is a Duck Number or not.
//Expected Output :
//Input a number: 3210
//The given number is a Duck Number
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,num1,i,temp,temp1,s=0,a=0;
printf("enter 1st Amicable pairnumber");
scanf("%d",&num);
printf("enter 2nd Amicable pairnumber");
scanf("%d",&num1);
for(i=1;i<num;i++)
{
    if(num%i==0)
    {
        s=s+i;
    }
}
for(i=1;i<num1;i++)
{
    if(num1%i==0)
    {
        a=a+i;
    }
}
if(num1!=s)
{
printf("these two are not Amicable pair");
}
else if(a==num)
{
printf("these two are Amicable pair");
}
return 0;
}
//Write a program in C to check two numbers are Amicable numbers or not.
//Expected Output :
//Input the 1st number : 1184(factorial of that number sum=1210)
//Input the 2nd number : 1210(factorial of that number sum=1184)
//The given numbers are an Amicable pair.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,temp,s=0,a,count=0,x,m,n=0,z,r=1,count1,l;
printf("enter a circular prime Number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
    a=temp%10;
    count++;
    temp=temp/10;
}
for(i=1;i<count;i++)
{
r=r*10;
}
x=num;
for(i=1;i<=count;i++)
{
    m=x%10;
l=x/10;
x=m*r+l;
count1=0;
for(a=1;a<=x;a++)
    {
     if(x%a==0)
     {
        count1++;
     }
    
    }
  if(count1==2)
  {
    printf("%d is in a circular prime number\n",x);
  }
  else
  {
    printf("%d is not a circular prime number\n",num);
 break;
  }
 if(i==4)
  {
    printf("%d is a perfect circular prime number\n",num);
  }

}
return 0;
}
//Write a program in C to check if a given number is circular prime or not.
//Expected Output :
//Input a Number: 1193(3119,9311,1931and the number 1193 all are prime number so its a circulare prime no)
//The given number is a circular prime Number
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,temp,s=0,a,count=0;
printf("enter a perfect cube number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
  if(num%i!=0)
{}
  else if(i*i*i==num)
  {
    printf("%d is a perfect cube no\n",num);
    break;
  }
  else if(i==num)
  {
    printf("%d is not a perfect cube no\n",num);
  }
}
return 0;
}
//Write a program in C to check whether a given number is a perfect cube or not.
//Expected Output :
//Input a number: 125(5*5*5=125)
//The number is a perfect Cube of 5
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,s=0,a=1,count=0,x;
printf("enter ur Mersenne prime no");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
x=pow(2,i);
  if(x==num)
  {
    printf("%d its a Mersenne no\n",num);
  }
}
for(i=1;i<=num;i++)
{
if(num%i==0)
{
    count++;
}
}
if(count==2)
{
    printf("%d is a Mersenne prime no\n",num);
}
else
{
    printf("%d is not a Mersenne prime no\n",num);
}
return 0;
}
 //Write a program in C to Check if a number is Mersenne prime number or not.
//Expected Output :
//Input a number: 127
//127 is a Mersenne prime number.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,temp,s=0,a=1,count=0,x;
printf("enter ur narcissistic no");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
  x=temp%10;
  count++;
  temp=temp/10;
}
temp=num;
for(i=1;i<=count;i++)
{
    x=temp%10;
s=s+pow(x,count);
  temp=temp/10;
}
if(s==num)
{
  printf("%d is a narcissistic number",num);
}
else
{
  printf("%d is not a narcissistic number",num);
}
return 0;
}
//narcissistic no=153(1^3+5^3+3^3=153)
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,i;
printf("enter line number");
scanf("%d",&line);
while(a<line)
{
    a=a+1;
for(i=0;i<line;i++)
{
printf("%d",a);
}
printf("\n");
}


return 0;
}
//111
 //  222
  // 333
   */
   //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /*
   #include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,i;
printf("enter line number");
scanf("%d",&line);
while(a<line)
{
    a=a+1;
for(i=1;i<=line;i++)
{
printf("%d",i);
}
printf("\n");
}


return 0;
}
//123
  // 123
   //123
   */
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /*
   #include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,i;
printf("enter line number");
scanf("%d",&line);
while(a<line)
{
    a=a+1;
for(i=a;i<=line;i++)
{
printf("%d",i);
}
printf("\n");
}


return 0;
}
//12345
   //2345
   //345 
   //45
   //5
   */
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /*
   #include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,i,x=0,temp;
printf("enter line number");
scanf("%d",&line);
temp=line;
while(x<line)
{
    a=a+1;
for(i=a;i<=temp;i++)
{
printf("%d",i);
}
printf("\n");
x=x+1;
temp=temp+1;
}


return 0;
}
  //123
   //234
   //345 
   */
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,i,x=0,temp;
printf("enter line number");
scanf("%d",&line);
while(x<line)
{
    temp=line;
    a=0;
do{
printf("%d",temp);
    if(x>a)
    {
        temp=temp-1;
    }
    a=a+1;
}while(a<line);
printf("\n");
    x=x+1;
}

return 0;
}
//4444
//4333
//4322
//4321
*/   
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,i,x=0,temp;
printf("enter line number");
scanf("%d",&line);
while(x<line)
{
    temp=x+1;
    a=0;
do{
printf("%d",temp);
    if(x<=a)
    {
        temp=temp+1;
    }
    a=a+1;
}while(a<line);
printf("\n");
    x=x+1;
}

return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=0,i,x=0,temp;
printf("enter line number");
scanf("%d",&line);
while(a<line)
{
    a=a+1;
for(i=1;i<=line;i++)
{
    x=x+1;
    printf("%d",x);
}
printf("\n");
}

return 0;
}
//1234
//5678
//9101112
//13141516
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int a=0,b,num,temp;
printf("enter a line number");
scanf("%d",&num);
for(int x=1;x<=num;x++)
{

for(int i=1;i<=num;i++)
{
a=a+1;    
if(a>num)
{
    printf("%d",num);
}
else
{
printf("%d",a);
}
}
printf("\n");
a=x;
}
return 0;
}
//1234
//2344
//3444
//4444
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,a=0,i,s=0,n,y=1,b=0;
printf("enter ur line no");
scanf("%d",&num);
temp=num;
n=num;
n=n*2;
for(i=1;i<=num;i++)
{
if(i>=2)
{
for(int x=1;x<=a;x++)
{
    printf("%d",temp);
    temp=temp-1;
}
}
n=n-1;
for(y=i;y<=n;y++)
{
    printf("%d",temp);
}
if(i>=2)
{
for(int x=1;x<=a;x++)
{
        temp=temp+1;
    printf("%d",temp);
}
}
    a=a+1;
printf("\n");
}
a=num-1;
int m=3;
for(i=1;i<num;i++)
{
if(a<num)
{
for(int x=1;x<a;x++)
{
    printf("%d",temp);
    temp=temp-1;
}
}
for(y=1;y<=m;y++)
{
printf("%d",temp);
}
m=m+2;
if(a<num)
{
for(int x=1;x<a;x++)
{
        temp=temp+1;
    printf("%d",temp);
}
}
a=a-1;
printf("\n");
}

return 0;    
}
//555555555
//544444445
//543333345
//543222345
//543212345
//543222345
//543333345
//544444445
//555555555
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=1,b;
printf("enter line no");
scanf("%d",&line);
b=line;
for(int i=line;i>=1;i--)
{
for(int m=b;m>1;m--)
{
printf(" ");
}
b=b-1;
for(int m=1;m<=a;m++)
{
printf("*");
}
printf("\n");
a=a+2;
}

return 0;    
}
Output
//    *
//   ***
//  *****
// *******
//*********
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=1,b;
printf("enter line no");
scanf("%d",&line);
b=line;
for(int i=line;i>=1;i--)
{
for(int m=b;m>1;m--)
{
printf(" ");
}
b=b-1;
for(int m=1;m<=a;m++)
{
    if(a==line*2-1)
    {
        printf("*");
    }
    else if(m==1)
    {
        printf("*");
    }
    else if(m==a)
    {
        printf("*");
    }
    else
    {
        printf(" ");
    }
}
printf("\n");
a=a+2;
}

return 0;    
}
//Output
//    *
//   * *
//  *   *
 //*     *
//*********
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line,a=1,b;
printf("enter line no");
scanf("%d",&line);
b=line;
for(int i=line;i>=1;i--)
{
for(int m=i;m>=1;m--)
{
printf("*");
}

for(int m=1;m<a;m++)
{
        printf(" ");
}
for(int m=i;m>=1;m--)
{
printf("*");
}
printf("\n");
b=b-1;
a=a+2;
}
b=line*2;
for(int i=1;i<=line;i++)
{
for(int x=1;x<=i;x++)
{
printf("*");
}
b=b-2;
for(int x=1;x<=b;x++)
{
    printf(" ");
}
for(int x=1;x<=i;x++)
{
printf("*");
}
printf("\n");
}
return 0;    
}
//Output

//**********
//****   ****
//***      ***
//**         **
//*            *
//*            *
//**         **
//***      ***
//****   ****
//**********
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int line;
printf("enter line no");
scanf("%d",&line);
int l=line/2,j=line/2;
for(int i=line/2; i<=line; i+=2)
{
 for(int m=1; m<line-i; m+=2)
        {
            printf(" ");
        }
for(int n=1;n<=l;n++)
{
    printf("*");
}
for(int m=1;m<=j;m++)
{
printf(" ");
}
for(int n=1;n<=l;n++)
{
    printf("*");
}
l=l+2;
j= j-2;
printf("\n");
}
int a=line;
a=a*2-1;
for(int m=1;m<=line;m++)
{
for(int n=1;n<m;n++)
{
    printf(" ");
}
for(int i=1;i<=a;i++)
{
printf("*");
}
    a=a-2;
printf("\n");
}
return 0;    
}

//Output

//  *****        *****
// *******     *******
//********* *********
//*******************
 //*****************
//  ***************
//   *************
//    ***********
//     *********
//      *******
//       *****
//        ***
 //        *
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
    int num,i,temp,c=0,r;
    printf("enter a duck no");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        c++;
        temp=temp/10;
    }
    for(i=1;i<=c;i++)
    {
        if(i==c)
        {
            r=0;
            printf("not a duck no");
            break;
        }
        if(num<=0)
        {
            printf("not a duck no");
            break;
        }
        r=num%10;
        if(r==0)
        {
            printf("duck no");
            break;
        }
    }
    return 0;
}
duck no 
*/
////////////////////////////////////////////////////////////////////////////////
 