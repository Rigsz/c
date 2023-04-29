/*#include<math.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],a;
    printf("enter a string\n");
    gets(str);
    a=strlen(str);
    printf("%d",a);
    return 0;
}
how to count a length of string with function
 */
 /////////////////////////////////////////////////
/*#include<math.h>
#include<stdio.h>
int main()
{
    char str[50],a;
    printf("enter a string\n");
    gets(str);
    for(a=0;str[a]!='\0';a++);
    printf("%d",a);
    return 0;
}
how to count a length of string with function without using function from string library
 */
 //////////////////////////////////////////////////////
/*
#include<string.h>
#include<stdio.h>
int main()
{
    char str[50],str1[50];
    int a;
    printf("enter a string\n");
    gets(str);
    for(a=0;str[a]!='\0';a++)
    {
        str1[a]=str[a];
    }
    str1[a]='\0';
    puts(str1);
    return 0;
}

copying string a variable to another
 */
 ////////////////////////////////////////////////////
/*
#include<string.h>
#include<stdio.h>
int main()
{
    char str[50],str1[50];
    int a,i;
    printf("enter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    --i;
    for(a=0;str[a]!='\0';a++,i--)
    {
        str1[a]=str[i];
    }
    str1[a]='\0';
    puts(str1);
    return 0;
}
string reverse
*/
/////////////////////////////////////////////////
/*#include<string.h>
#include<stdio.h>
int main()
{
    char str[50],str1[50];
    int a,i;
    printf("enter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    --i;
    for(a=0;str[a]!='\0';a++,i--)
    {
        str1[a]=str[i];
    }
    str1[a]='\0';
    puts(str1);
    printf("\n");
    if(strcmpi(str,str1)==0)
    {
        printf("its a palindrome string");
    }
    else
    {
        printf("its not a palindrome string");
    }
    return 0;
}
string reverse and lets see if its palindrome or not
strcmpi   thats i at last is for ignore lower case and upper case from string
*/
////////////////////////////////////////////////////////
/*
#include<string.h>
#include<stdio.h>
int main()
{
    char str[50],str1[50],str2[50];
    int a,i,k;
    printf("enter a string\n");
    gets(str);
    printf("enter anoter string\n");
    gets(str1);
    for(k=0;str[k]!='\0';k++)
    {
        str2[k]=str[k];
    }
    for(a=0;str1[a]!='\0';a++,k++)
    {
        str2[k]=str1[a];
    }
    str2[k]='\0';
    puts(str2);
    return 0;
}
two string variables combine them
*/
///////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter a string");
    gets(str);
    puts(str);
    return 0;
}

Write a program in C to input a string and print it. Go to the editor

Test Data :
Input the string : Welcome, w3resource

Expected Output :

The string you entered is : Welcome, w3resource 
*/
//////////////////////////////////////////////
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("the length of string is %d",i);
    return 0;
}
Write a program in C to find the length of a string without using library function. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

Length of the string is : 15 
*/
///////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j;
    printf("enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    for(j=i;j>=0;j--)
  {
    printf("%c  ",str[j]);
  }
    return 0;
}

Write a program in C to print individual characters of string in reverse order. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string in reverse are :
m  o  c  .  e  c  r  u  o  s  e  r  3  w 
*/
/////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,count=1;
    printf("enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]==' ')
      {
        count++;
      }
    }
    printf("the amount of words are %d",count);
    return 0;
}

Write a program in C to count the total number of words in a string. Go to the editor

Test Data :
Input the string : This is w3resource.com

Expected Output :

Total number of words in the string is : 3 
*/
/////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,count=0,c=0;
    printf("Is mars bigger than a earth?\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]=='y'||a[i]=='Y'||a[i]=='E'||a[i]=='e'||a[i]=='S'||a[i]=='s')
    {
        count++;
    }
    }
    printf("Is sun bigger than a earth?\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]=='y'||a[i]=='Y'||a[i]=='E'||a[i]=='e'||a[i]=='S'||a[i]=='s')
    {
        c++;
    }
    }
    if(count==3&&c==3)
    {
        printf("human wow\n");
    }
    else if(count==3)
    {
        printf("not human\n");
    }
    else if(c==3)
    {
        printf("wow kinda dumfuk");
    }
    else
    {
        printf("ADHD");
    }
    return 0;
}
*/
/////////////////////////////////////////////////////////////
/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],word;
    int i,j,count=0,c=0,b[100],n=0,max;
    printf("enter a string\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            count++;
        }
    b[i]=count;
    count=0;
    }
    max=b[0];
    for(i=0;a[i]!='\0';i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            word=a[i];
        }
    }
    printf("%c is the highest letter used in this string and the amount is %d",word,max);
    return 0;
}
*/
////////////////////////////////////////////////////////////////////
