#include<stdio.h>
int a[5],top=-1;
void push();
void pop();
void display();
void exit();

int main()
{
    int ch;
    printf("1.push or insert\n");
    printf("2.pop or delete\n");
    printf("3.display\n");
    printf("4.exit\n");
    
    while(1)
    {
       printf("enter the choice:");
       scanf("%d",&ch);
       switch(ch)
      {
          case 1:
          {
               push();
               break;
          }
          case 2:
          {
              pop();
              break;
          }
          case 3:
          {
              display();
              break;
          }
          case 4:
          {
              exit (0);
          }
          default:
          {
              printf("wrong choice");
          }
      } 
       
    }
    
}
void push()//insert 
{
    int data;
    if(top==5-1)
    {
        printf("\n stack is full\n");
        
    }
    else
    {
        printf("enter element:");
        scanf("%d",&data);
        top++;
        a[top]=data;
    }
}
void pop()//delete
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("pop element:%d\n",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if( top>=0)
    {
       printf("element:\n");
       for(i=0;i<=top;i++)
       printf("%d\n",a[i]);
       
     }
     else
     {
         printf("stack is empty\n");
     }
}