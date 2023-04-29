/*
#include<stdio.h>
int sum(int x)
{
    if (x<0)
    return 0;
    else
    return x+sum(x-1);
}
int main()
{
    int x,y;
    scanf("%d",&x);
    y=sum(x);
    printf("%d",y);
}
*/
//////////////////////////////////////////
/*#include<stdio.h>
int sum(int x)
{   static int a=0,b=1,s;
    if (x==1)
    return 0;
    s=a+b;
    printf("%d\n",s);
    a=b;
    b=s;
    return sum(x-1);
}
int main()
{
    int x,y;
    printf("gib a range of num");
    scanf("%d",&x);
    printf("1\n");
    y=sum(x);
    return 0;
}
Write a program in C to Print Fibonacci Series using recursion. Go to the editor
Test Data :
Input number of terms for the Series (< 20) : 10
Expected Output:

 Input number of terms for the Series (< 20) : 10                                
 The Series are :                                                                
 1  1  2  3  5  8  13  21  34  55  */
 /////////////////////////////////////////////////////////////////////////////
 ****************UNSOLVED********************************
 #include<stdio.h>
int arr(int x)
{   static int a[x];
    if (x<0)
    return 0;
    scanf("%d",a[x]);
    return arr(x-1);
    printf("%d",a[x]);
}
int main()
{
    int x;
    printf("gib a range of num");
    scanf("%d",&x);
    arr(x);
    return 0;
}
/*Write a program in C to print the array elements using recursion. Go to the editor
Test Data :
Input the number of elements to be stored in the array :6
Input 6 elements in the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 10
element - 5 : 12
Expected Output :

The elements in the array are : 2  4  6  8  10  12   */
///////////////////////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
int numm(int x)
{   static int count=0;
    if (x<1)
    return 0;
    numm(x/10);
    count++;
}
int main()
{
    int x,y;
    printf("gib a range of num");
    scanf("%d",&x);
    y=numm(x);
    printf("the digits of number is %d",y);
    return 0;
}
Write a program in C to count the digits of a given number using recursion. Go to the editor
Test Data :
Input a number : 50
Expected Output :
The number of digits in the number is :  2 */
//////////////////////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
int numm(int x)
{  
    if (x<1)
    return 0;
    return (x%10+numm(x/10));  
}
int main()
{
    int x,y;
    printf("gib a num");
    scanf("%d",&x);
    y=numm(x);
    printf("the sum of digits is %d",y);
    return 0;
}
Write a program in C to count the digits of a given number using recursion. Go to the editor
Test Data :
Input a number : 50
Expected Output :
The number of digits in the number is :  2 */
////////////////////////////////////////////////////////////////////////////////////

/*#include<stdio.h>
int maximum(int num)
{  
    static int max=0,n;
    if(num<1)
    return 1;
    printf("eneter number");
    scanf("%d",&n);
    if(n>max)
    max=n;
    maximum(num-1);
    return max;
}
int main()
{
    int num,y;
    printf("enter amount of numbers");
    scanf("%d",&num);
    y=maximum(num);
    printf("maximum number is %d",y);
    return 0;
}
 Write a program in C to get the largest element of an array using recursion. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :
Largest element of an array is: 25  */
/////////////////////////////////////////////////////////////////////////////////
/* #include<math.h>
#include<stdio.h>
int binary(int num,int b)
{   static int a=2,s=0;
    if(b<0)
    return 0;
    if(s+pow(a,b)<=num)
    {
        printf("1");
        s=s+pow(a,b);
    }
    else
    {
        printf("0");
    }
    b--;
    binary(num,b);
}
int main()
{
    int num,y,a=2,b=0,s=0;
    printf("enter a decimal num");
    scanf("%d",&num);
    while(s<=num)
    {
        s=s+pow(a,b);
        b++;
    }
    b--;
    y=binary(num,b);
    return 0;
}



Write a program in C to convert a decimal number to binary using recursion. Go to the editor
Test Data :
Input any decimal number : 66
Expected Output :
The Binary value of decimal no. 66 is : 1000010    */
///////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
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
Write a program in C to check a number is a prime number or not using recursion. Go to the editor
Test Data :
Input any positive number : 7
Expected Output :
The number 7 is a prime number */
////////////////////////////////////////////////////////////////////////////////////////////////////////
