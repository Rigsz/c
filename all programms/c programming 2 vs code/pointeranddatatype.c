#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
    int data;
    struct NODE *link;
}node;
node *head=NULL;
void adder()
{
    int val;
    node *temp,*ptr;
    printf("enter data");
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
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}
void first_add()
{
    node *temp;
    int val;
    printf("enter data to put first");
    scanf("%d",&val);
    temp=(node*)malloc(sizeof(node));
    temp->data=val;
    temp->link=head;
    head=temp;
}
void del()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("\nlist is empty nothing to del here");
    }
    else
    {
        temp=head;
        head=temp->link;
        printf("\ndeleted value is %d\n",temp->data);
        free(temp);
    }
}
void display()
{
    node *ptr;
    if(head==NULL)
    {
        printf("list is empty");

    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
    }
}


    int main()
    {
        int ch;
        do 
        {
            printf("\n1. for adding data at last\n2. for adding data at first\n3.for deleting value from first\n99. for display\n100.for exit\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                adder();
                break;
                case 2:
                first_add();
                break;
                case 3:
                del();
                break;
                case 99:
                display();
                break;
                case 100:
                printf("the work is done");
                break;
                default:
                printf("scelect proper number");
            }
        }while(ch!=100);

        return 0;
    }