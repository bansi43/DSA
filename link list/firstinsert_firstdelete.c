#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;

};

struct node *head = NULL;

void insertfirst(int val) {
    
   struct node *ptr=head;
   struct node *temp=malloc(sizeof (struct node));
   temp->data=val;
   temp->next=NULL;

   if(head==NULL)
   {
     head=temp;
     return;
   }
  else
  {
    temp->next=head;
    head=temp;
     return;
  }
  

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
void deletefirst()
{

    struct node *ptr=head;
    struct node *p;
    if(head==NULL)
    {
        printf("list is empty.....");
    }
    else 
    {
      head=head->next;
      free(ptr);
      return;
    }
    
}
int main()
{
    insertfirst(100);
    insertfirst(200);
    insertfirst(300);
    display();
    deletefirst();
    display();
    deletefirst();
    display();
   
   
}  




















































