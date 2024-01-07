
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertend(int val)
{   
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = head;
        temp->prev = ptr;
    }
    return;
}


void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("list is alredey empty....");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = head;
        free(ptr);
    }
    return;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    temp->prev = NULL;
    while (ptr->next != head)
    {
        ptr = ptr->next;
        head->prev = temp;
    }
    temp->next = head;
    head = temp;
    ptr->next = head;
}


void deletefirst()
{
   /* if (head == NULL)
    {
        printf("list n");
        return;
    }*/
    struct node *p = head;
    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    if (ptr == head)
    {
        head == NULL;
        head->prev = NULL;
    }
    else
    {
        head = head->next;
        ptr->next = head;
    }

    free(p);
}


void insertmid(int val, int position)
{
    struct node *ptr = head, *p;
    struct node *temp = malloc(sizeof(struct node));
    int i = 0;

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;


    while (i < position                                                                                                                                                                                                                                                                                                                                                                                                                                                                           )
    {
        i++;
        p = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr;
    temp->prev = p;
    p->next = temp;
    if (ptr != NULL)
    {
        ptr->prev = temp;
    }
    return;
}

void deletmid(int pos)
{
    struct node *ptr = head, *p;
    struct node *prev;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    if (ptr->next != NULL)
    {
        ptr->next->prev = prev;
    }
    free(ptr); 
    return;
}    



void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("\nlist is empty...");
    }
    else
    {
        do
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
    }
    printf("\n");
}

int main()
{
    insertend(100);
    insertend(200);
    insertend(300);
    insertend(400);
    insertend(500);
    insertend(600);
    display();
    display();
    deleteEnd();
    deleteEnd();
    display();
    insertfirst(50);
    display();
    deletefirst();
    display();
    insertmid(599, 3);
    display();
    deletmid(400);
    display();
}