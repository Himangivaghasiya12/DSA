/*#include<stdio.h>
struct Node
{
    int data;
    char ch;
    struct Node *ptr;    
};
int main()
{
    struct Node a,b,c;
    
    a.data=65;
    a.ch='A';
    a.ptr=NULL;

    b.data=66;
    b.ch='B';
    b.ptr=NULL;

    c.data=67;
    c.ch='C';
    c.ptr=NULL;

    a.ptr=&b;
    b.ptr=&c;

    printf("\n %c--%d",a.data,a.ch);
    printf("\n %c--%d",a.ptr->data,a.ptr->ch);
    //printf("\n %c--%d",a.ptr->data,node1->val);
}*/

#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;

};
int main()
{
    struct node a,b,c;
    a.data=10;
    a.ch='A';
    a.ptr=NULL;

    b.data=20;
    b.ch='B';
    b.ptr=NULL;

    c.data=20;
    c.ch='C';
    c.ptr=NULL;

    printf("A: data: %d, ch: %c", a.data,a.ch);
    printf("\nB: data: %d, ch: %c", b.data,b.ch);
    printf("\nC: data: %d, ch: %c", c.data,c.ch);

    a.ptr=&b;
    printf("\nB: data:%d,ch:%c",a.ptr->data,a.ptr->ch);

    b.ptr=&a;
    printf("\nA: data:%d,ch:%c",b.ptr->data,b.ptr->ch);
    
    c.ptr=&a;
    printf("\n C: data:%d,ch:%c",c.ptr->data,c.ptr->ch);
};