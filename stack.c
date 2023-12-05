#include<stdio.h>
#define n 5

int a[n],top=-1;

int display()
{
    for(int i=0; i<=top; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int insertEnd(int val)
{
    if(top>=n-1)
    {
        printf(" Stack Is Full........\n");
    }
    else
    {
        //top++;
        a[++top]=val;
    }
}*/


int insertfirst(int val)
{
    if(top<=n+1)
    {
        printf(" Stack Is Full........\n");
    }
    else
    {
        top--;
        //a[++top]=val;
    }
}

/*int deletEnd(int val)
{
    if(top>n-0)
    {
        printf(" Stack Is Empty......\n");
    }
    else
    {
        
        //a[--top]=val;
        top=top-1;
    }
}*/


int deletEnd()
{
    if(top<0)
    {
        printf(" Stack Is Empty......\n");
    }
    else
    {
        top--;
        
    }
}

int main()
{
   insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    //insertEnd(60);
   /* deletEnd();
    deletEnd();
    deletEnd();
    deletEnd();*/
    //deletEnd();
    insertfirst(10);
    insertfirst(20);

    display();


}