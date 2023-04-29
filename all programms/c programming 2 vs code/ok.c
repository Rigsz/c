#include<stdio.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
}node;

node *head=NULL;

void append()
{
    int val;
    node *temp,*ptr;

    printf("\nEnter a Number ");
    scanf("%d",&val);
    temp=(node*)malloc(sizeof(node));
    temp->link=NULL;
    temp->data=val;
    if(head==NULL)
    {
       head=temp;
    }
    else
    {
         ptr=head;
         while(ptr->link!=NULL)
            ptr=ptr->link;
         ptr->link=temp;
    }

}

void display()
{
     node *ptr;
     if(head==NULL)
     {
         printf("\n List Is Blank");
     }
     else
     {
         ptr=head;
         while(ptr!=NULL)
         {
            printf("\n%d",ptr->data);
             ptr=ptr->link;
         }


     }


}

int main()
{
    int ch;

    do
    {   printf("\n1.Append  2.Dispay    3.Exit");
        printf("\n Enter your Choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
               append();
                break;
        case 2:
               display();
                break;
        case 3:
                ch=3
                ;
                break;
        default :
                printf("\nWrong Input");
        }

    }while (ch!=3);



}