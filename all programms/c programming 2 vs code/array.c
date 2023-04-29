/*
#include<stdio.h>
#include<math.h>
int main()
{
int num[20];
for(int i=0;i<10;i++)
{
printf("element%d\t",i);
scanf("%d",&num[i]);
printf("\n");
}
for(int i=0;i<10;i++)
{
printf("%d\t",num[i]);    
}
return 0;
}
//Write a program in C to store elements in an array and print it.
//Test Data :
//Input 10 elements in the array :
//element - 0 : 1
//element - 1 : 1
//element - 2 : 2...
//Expected Output :
//Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//WARNING: THIS PROGRAM CAN ONLY APPLICABLE FOR 4 DIGIT NUMBERS 
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num,k[200],i,temp,s=0,a;
printf("enter number");
scanf("%d",&num);
temp=num;
    int count=0;
while(temp!=0)
{
    i=temp%10;
    count++;
    temp=temp/10;
}
temp=num;
for(i=0;i<count;i++)
{
    a=temp%10;
    k[i]=a;
    temp=temp/10;
}
while(s!=num)
{
s=k[3]+k[2]+k[1]+k[0];
    k[3]=k[2];
    k[2]=k[1];
    k[1]=k[0];
    k[0]=s;
}
if(s==num)
{
    printf("%d is a keith no",num);
}
else
{
    printf("%d is not a keith no",num);
}
return 0;
}
Write a program in C to check if a number is Keith or not. Go to the editor
Expected Output :
Input a number : 1104
The given number is a Keith Number.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
int num[40],w;
printf("enter range");
scanf("%d",&w);
int s=0;
for(int i=0;i<w;i++)
{
printf("element %d\t",i);
scanf("%d",&num[i]);
s=s+num[i];
}
printf("sum %d",s);
return 0;
}
//Write a program in C to find the sum of all elements of the array. Go to the editor
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 2
//element - 1 : 5
//element - 2 : 8
//Expected Output :
//Sum of all elements stored in the array is : 15
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<string.h>
#include<stdio.h>
int main()
{
    char str[50];
    int k;
    printf("enter a string\n");
    gets(str);
    for(k=0;str[k]!='\0';k++)
    {
        if(str[k]>=65&&str[k]<=90)
        printf("%c.",str[k]);
    }
    return 0;
}
take only uppercase letters from a string
*/
///////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,size;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter numbers");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
      printf("numbers are\n");
  for(i=size-1;i>=0;i--)
  {
    printf(" %d\t",i);
    printf(" %d\t",a[i]);
      printf("\n");
  }
  return 0;
}

Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/
////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,size,b[50];
  printf("enter array size");
  scanf("%d",&size);
  printf("enter numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
      printf("copy numbers are\n");
 for(i=0;i<size;i++)
 {
  b[i]=a[i];
  printf("%d\t",b[i]);
 }
  return 0;
}

Write a program in C to copy the elements of one array into another array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
///////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,n=0;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
 for(i=0;i<size;i++)
 {
  j=i;
 for(j ;j<size;j++)
 {
    if(i!=j&&a[i]==a[j])
  {    c++;
      a[j]=n;
      n++;
  }
 }  
 }
      printf("amount of duplicate numbers are %d\n",c);
  return 0;
}

Write a program in C to count a total number of duplicate elements in an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/
//////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,n=0;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
        printf("unique numbers are \n");
 for(i=0;i<size;i++)
 {
 for(j=0;j<size;j++)
 {
    if(i!=j&&a[i]==a[j])
  {   
    break;
  }
    else if(j==size-1)
    {
      printf("%d\t",a[i]);
    }
 }  
 }
  return 0;
}

Write a program in C to print all unique elements in an array. Go to the editor
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/
//////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],b[50],i,j=0,size,c=0,n;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter 1st array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
    printf("enter 2nd array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&b[i]);
  }
 for(i=size;i<size*2;i++)
 {
 a[i]=b[j];
 j++;
 }
 for(i=0;i<size*2;i++)
 {
  for(j=0;j<size*2;j++)
  {
    if(a[j]<a[j+1])
    {
      n=a[j];
      a[j]=a[j+1];
      a[j+1]=n;
    }
  }
 }
  for(j=0;j<size*2;j++)
  {
    printf("%d\t",a[j]);
  }
  return 0;
}

Write a program in C to merge two arrays of same size sorted in decending order. Go to the editor
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
*/
///////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
for(i=0;i<size;i++)
{
  j=i;
  c=1;
  for(j;j<size;j++)
  {
    if(a[i]==0)
    {
      break;
    }
    else if(i!=j&&a[i]==a[j])
  { 
      c++;
      a[j]=0;
  }
  }
  if(a[i]!=0)
  printf("%d occured %d times",a[i],c);
}
  return 0;
}

Write a program in C to count the frequency of each element of an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/
//////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,max,min;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  min=a[0];
  max=a[0];
for(i=1;i<size;i++)
{
  if(a[i]>max)
  {
    max=a[i];
  }
  else if(a[i]<min)
  {
    min=a[i];
  }
}
printf("max value=%d\n min value=%d",max,min);
  return 0;
}

Write a program in C to find the maximum and minimum element in an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/
////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,d=0,even[50],odd[50];
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
for(i=0;i<size;i++)
{
  if(a[i]%2==0)
  {
    even[c]=a[i];
    c++;
  }
  else
  {
    odd[d]=a[i];
    d++;
  }
}
  printf("even numbers are\n");
  for(i=0;i<c;i++)
  {
    printf("%d\t",even[i]);
  }
  printf("\nodd numbers are\n");
  for(i=0;i<d;i++)
  {
    printf("%d\t",odd[i]);
  }


  return 0;
}

Write a program in C to separate odd and even integers in separate arrays. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/
////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,d=0,even[50],odd[50],num;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the num want to input");
  scanf("%d",&num);

  if(a[size/2]==num)
  {
    printf("number found in %d array",size/2);
  }
  else if(a[size/2]>num)
  {
    for(i=0;i<size/2;i++)
    {
      if(a[i]==num)
      {
        printf("number found in array no %d",i);
        break;
      }
    }
  }
  else
  {
    for(i=size/2;i<size;i++)
    {
          if(a[i]==num)
      {
        printf("number found in array no %d",i);
        break;
      }
    }
  }

  return 0;
}

find a number from array if the num exist or not
*/
//////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,d=0,even[50],odd[50],num,temp,temp1;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the num want to input");
  scanf("%d",&num);

for(i=0;i<=size;i++)
{
  if(a[i]<num&&a[i+1]>num)
  {
    for(j=size;j>i+1;j--)
    {       
      a[j]=a[j-1];
    }
    a[i+1]=num;
    break;
  }
}
  for(i=0;i<=size;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}

Write a program in C to insert New value in the array (sorted list ).. Go to the editor
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 5 7 9 11
After Insert the list is :
2 5 7 8 9 11
*/
///////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,d=0,even[50],odd[50],num,temp,pos;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the num want to input");
  scanf("%d",&num);
  printf("enter the array where u want to input");  
  scanf("%d",&pos);

    for(j=size;j>pos;j--)
    {       
      a[j]=a[j-1];
    }
    a[pos]=num;

  for(i=0;i<=size;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}

Write a program in C to insert New value in the array (unsorted list ). Go to the editor
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/
///////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,d=0,even[50],odd[50],num,temp,pos;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the num want to del");
  scanf("%d",&num);
  for(i=0;i<size;i++)
  {
    if(a[i]==num)
    {
      for(j=i;j<size-1;j++)
    {       
      a[j]=a[j+1];
    }
        break;
    }
  }

  for(i=0;i<size-1;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}

Write a program in C to delete an element at desired position from an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/
//////////////////////////////////////////////////////////////////////////

/*
#include<stdio.h>
int main()
{
  int a[50],i,j,size,c=0,d=0,num,max,m,min;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
for(i=0;i<size;i++)
{
  if(a[i]>max)
  {
    max=a[i];
  }
  else if(a[i]<min)
  {
    min=a[i];
  }
}
for(i=0;i<size;i++)
{
  if(a[i]!=max&&a[i]>min)
  {
    m=a[i];
  }
}
printf("sec largest value is %d",m);
  return 0;
}

Write a program in C to find the second largest element in an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
*/
////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50][50],i,j,size,c=0,d=0,num;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}

Write a program in C for a 2D array of size 3x3 and print the matrix. Go to the editor
Test Data :
Input elements in the matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :

1 2 3
4 5 6
7 8 9
*/
///////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,c=0,d=0,num;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      num=a[i][j]+b[i][j];
      printf("%d\t",num);
    }
    printf("\n");
  }

  return 0;
}

Write a program in C for addition of two Matrices of same size. Go to the editor
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
1 2
3 4
The Second matrix is :
5 6
7 8
The Addition of two matrix is :
6 8
10 12
*/
/////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,s=0,d=0,num,k;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<size;i++)
  {

    for(j=0;j<size;j++)
{    s=0;
  for(k=0;k<size;k++)
           {
            s=s+(a[i][k]*b[k][j]);
           }
    printf("%d\t",s);
  }
      printf("\n");
  }
  return 0;
}

Write a program in C for multiplication of two square Matrices. Go to the editor
Test Data :
Input the rows and columns of first matrix : 2 2
Input the rows and columns of second matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
1 2
3 4
The Second matrix is :
5 6
7 8
The multiplication of two matrix is :
19 22
43 50
*/
///////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,s=0,d=0,num,k;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<size;i++)
  {
 
    for(j=0;j<size;j++)
  {    
    b[i][j]=a[j][i];
  }
  }
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  return 0;
}

Write a program in C to find transpose of a given matrix. Go to the editor
Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4
*/
//////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,s=0,d=0,num,k;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  k=size-1;
  for(i=0;i<size;i++)
  {
 
    for(j=0;j<size;j++)
  {    
    if(i==d&&j==k)
    {
    s=s+a[i][j];
    d++;
    k--;
    }
  }
  }
     for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("the sum of diagonal %d",s);

  return 0;
}

Write a program in C to find sum of right diagonals of a matrix.Go to the editor
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :
1 2
3 4
Addition of the right Diagonal elements is :5
*/
////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,s=0,d=0,num,k;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
    if(i<=j)
    {
      continue;
    }
    else
    {
      a[i][j]=0;
    }
  }
  }
  printf("the lower triangle matrix\n");
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
      printf("%d\t",a[i][j]);
  }
  printf("\n");
  }
  return 0;
}

/* Write a program in C to print or display the lower triangular of a given matrix. Go to the editor
Test Data :
Input the size of the square matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :
1 2 3
4 5 6
7 8 9

Setting zero in lower triangular matrix

1 2 3
0 5 6
0 0 9
*/

/////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,s=0,d=0,num,k;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
    if(i>=j)
    {
      continue;
    }
    else
    {
      a[i][j]=0;
    }
  }
  }
  printf("the lower triangle matrix\n");
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
      printf("%d\t",a[i][j]);
  }
  printf("\n");
  }
  return 0;
}

Write a program in C to print or display upper triangular matrix. Go to the editor
Test Data :
Input the size of the square matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :
1 2 3
4 5 6
7 8 9

Setting zero in upper triangular matrix

1 0 0
4 5 0
7 8 9
*/
//////////////////////////////////////////////////////////////
/* 
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,s=0,d=0,num,k;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
    if(a[i][j]==0)
    {
      s++;
    }
    else
    {
      d++;
    }
  }
  }
if(s>d)
{
  printf("this is a sparse matrix and the amount of 0 in this mtarix is %d\n",s);
}
else
{
  printf("this is not a sparse matrix and the amount of 0 in this mtarix is %d\n",s);
}
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
      printf("%d\t",a[i][j]);
  }
  printf("\n");
  }
  return 0;
}

Write a program in C to accept a matrix and determine whether it is a sparse matrix. Go to the editor
Test Data :
Input the number of rows of the matrix : 2
Input the number of columns of the matrix : 2
Input elements in the first matrix :
element - [0],[0] : 0
element - [0],[1] : 0
element - [1],[0] : 1
element - [1],[1] : 0
Expected Output :
The given matrix is sparse matrix.
There are 3 number of zeros in the matrix
*/
/////////////////////////////////////////////////////////////////////////////
/* 
#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],i,j,size,s=0,d=0,num,k;
  printf("enter array size");
  scanf("%d",&size);
  printf("enter array numbers\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
    printf("enter array numbers\n");
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
    if(a[i][j]==b[i][j])
    {
      s++;
    }
  }
  }
if(s==size*2)
{
  printf("two matrix are same\n");
}
else
{
  printf("two matrix are not same\n");
}
    for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
      printf("%d\t",a[i][j]);
  }
  printf("\n");
  }
      for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
  {    
      printf("%d\t",b[i][j]);
  }
  printf("\n");
  }
  return 0;
}

Write a program in C to accept two matrices and check whether they are equal. Go to the editor
Test Data :
Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The first matrix is :
1 2
3 4
The second matrix is :
1 2
3 4
The Matrices can be compared :
Two matrices are equal.
*/
//////////////////////////////////////////////////////////////////////////////
/*
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
//sort first then merge two array
*/
////////////////////////////////////////////////////////////////////////////////////
