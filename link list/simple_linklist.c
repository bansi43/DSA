#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;

};

struct node *head = NULL;

void insertEnd(int val) {
    
   struct node *ptr=head;
   struct node *temp=malloc(sizeof (struct node));
   temp->data=val;
   temp->next=NULL;

   if(head==NULL)
   {
     head=temp;
     return;
   }
   while(ptr->next!=NULL)
   {
    ptr=ptr->next;
   }
   ptr->next=temp;
   return;

}
void display()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("list is empty.....\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}
int main()
{
    insertEnd(100);
    insertEnd(200);
    insertEnd(300);
    insertEnd(400);
    insertEnd(500);
    insertEnd(600);
    insertEnd(700);
    insertEnd(800);
    display();
}  




















































