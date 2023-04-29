/*
#include <stdio.h>
#include <stdlib.h>
//function exercise #1//
int main()
{ char confirm;

    do
{
    printf("MENU\n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");



    int choice;
    int num1, num2;
    printf("Enter your choice by inputing a single integer then hit enter:");
    scanf("%d", &choice);
    printf("Enter your two numbers by inputting the first number and hit enter, then input the second number and hit enter:");
    scanf("%d %d", &num1, &num2 );
    printf("\n");

    int add (num1, num2)
    {
        return(num1+ num2);

    }

    int subtract (num1, num2)
    {
        return (num1 - num2);

    }

    int multiply (num1,num2)
    {
        return (num1*num2);

    }

    float divide (num1, num2)
    {
        return (num1/(float)num2);
    }

    switch (choice)
    {
        case 1: printf ("Results: %d\n", add(num1, num2)); break;
        case 2: printf("Results: %d\n", subtract (num1, num2)); break;
        case 3: printf("Results: %d\n", multiply (num1, num2)); break;
        case 4: printf("Results: %.2f\n", divide (num1, num2)); break;
        default: printf("invalid");
    }


 printf("\nPress y then hit enter to continue:");
 scanf("%s", &confirm);
printf("\n");
system ("cls");
 }
while (confirm == 'g');

return 0;


}
*/
///////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
void matrix_input_coloumns(int i, int j, int a[3][3])
{
	matrix_input_rows(i,j,a);
	i++;
	if(i>=3) return;
	matrix_input_coloumns(i,j,a);
}
void matrix_input_rows(int r, int c, int a[3][3])
{
	if(c>=3) return;
	scanf("%d",&a[r][c]);
	c++;
	matrix_input_rows(r,c,a);
}
void matrix_initialization(int i1, int j1, int b[3][3])
{
	matrix_initialization1(i1,j1,b);
	i1++;
	if(i1>=3) return;
	matrix_initialization(i1,j1,b);
}
void matrix_initialization1(int r1, int c1, int b[3][3])
{
	if(c1>=3) return;
	b[r1][c1]=0;
	c1++;
	matrix_initialization1(r1,c1,b);
}
void matrix_multiplication_coloumns(int i2, int j2, int k, int a[3][3],int b[3][3], int c[3][3])
{
	matrix_multiplication_rows(i2,j2,k,a,b,c);
	i2++;
	if(i2>=3) return;
	matrix_multiplication_coloumns(i2,j2,k,a,b,c);
}
void matrix_multiplication_rows(int r2, int c2, int k1, int a[3][3],int b[3][3], int c[3][3])
{
	matrix_multiplication(r2,c2,k1,a,b,c);
	c2++;
	if(c2>=3) return;
	matrix_multiplication_rows(r2,c2,k1,a,b,c);
}
void matrix_multiplication(int r2, int c2, int k2, int a[3][3],int b[3][3], int c[3][3])
{
	if(k2>=3) return;
	c[r2][c2] = c[r2][c2] + a[r2][k2]*b[k2][c2];
	k2++;
	matrix_multiplication(r2,c2,k2,a,b,c);
}
void matrix_output_coloumns(int i1, int j1, int b[3][3])
{
	matrix_output_rows(i1,j1,b);
	printf("\n\n");
	i1++;
	if(i1>=3) return;
	matrix_output_coloumns(i1,j1,b);
}
void matrix_output_rows(int r1, int c1, int b[3][3])
{
	if(c1>=3) return;
	printf("%d\t",b[r1][c1]);
	c1++;
	matrix_output_rows(r1,c1,b);
}
int main()
{
	int a[3][3],b[3][3],c[3][3],i=0,j=0,k=0;
	printf("Enter the elements of A matrix : ");
	matrix_input_coloumns(i,j,a);
	printf("Enter the elements of a B matrix : ");
	matrix_input_coloumns(i,j,b);
	matrix_initialization(i,j,c);
	matrix_multiplication_coloumns(i,j,k,a,b,c);
	printf("The multiplication of matrix are : \n");
	matrix_output_coloumns(i,j,c);
	return 0;
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////
