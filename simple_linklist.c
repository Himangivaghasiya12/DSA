#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head = NULL;
void Insert_End(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next =NULL;

    if(head == NULL  )
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next =temp;
    return;
}
void Delete_End()
{
     struct node *ptr = head, *p;

    if(head == NULL)
    {
       printf("List is already empty\n");
    }
    else if(head->next == NULL)
    {
        head=NULL;
        free(ptr);
    }
    else{
    while(ptr->next !=NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next =NULL;
    free(ptr);
    }

    return;
}
void Insert_First(int val)
{
     struct node *temp = (struct node *)malloc(sizeof(struct node));
     temp->data = val;
    temp->next = head;
    head = temp;
}
void Delet_First()
{
     struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}
void Insert_Mid(int val,int posi)
{
      struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    struct node *p;

    while (ptr->data != posi)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->next = ptr;
    return;
}
void Delet_Mid(int posi)
{
    struct node *ptr = head;
    struct node *p;

    while (ptr->data != posi)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return;
}
void Display()
{
    struct node *ptr = head;
    if( head == NULL)
    {
        printf("list is empty");

    }
    else{
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int main()
{
   Insert_End(100);
   Insert_End(200);
   Insert_End(300);
   Insert_End(400);
   Insert_End(500);
   Insert_End(600);

   Display();
   Delete_End();
   Delete_End();
   Display();

    Insert_First(10);
    Insert_First(20);
    Insert_First(30);
    Insert_First(40);
    Display();

    Delet_First();
    Delet_First();
    Display();

   Insert_Mid(60,30);
   Insert_Mid(70,40);
   Insert_Mid(90,10);
   Display();

   //Delet_Mid(60);
   Display();

   
}