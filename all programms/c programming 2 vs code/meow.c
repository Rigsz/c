#include<stdio.h>
struct Node 
{
    int data;
    struct *prev,*next;
}node;
struct Node *head = NULL;
void insertatfirst()
{
    int value;
    node *
}

int main()
{
    int ch;
    printf("1.insert at first   99.display   100.end");
    scanf("%d",&ch);
    do{
        switch(ch)
        {
            case 1: 
            insertatfirst();
            break;            
            case 99:
            display();
            break;
            case 100:
            printf("thats the end\n");
            break;
            default:
            printf("enter right number ");
        }
    }while(ch!=100);
}