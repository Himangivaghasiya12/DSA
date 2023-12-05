#include <stdio.h>
#define n 5
int a[5], top = -1,b[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}


int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int j,k;
    if(top==-1)
    {
        top++;
        a[top]=val;
    }
    /*else if(top>=4)
    {
        printf("\nStack is already full");
    }*/
    else{
        top++;
        k=top-1;

        for(int i=top;i>0;i--)
        {
            a[i]=a[k];
            k--;
        }
        a[0]=val;
    }
    
}


int deletefirst()
{
    int j=1;

    if(top==-1)
    {
        printf("\nStack is  empty");
    }
    
    else{
       for(int i=0;i<=top;i++)
       {
            a[i]=a[j];
            j++;
       }
    }
    top--;
}

int main()
{
    
    insertfirst(10);
    insertfirst(20);
    insertfirst(50);
    insertend(30);
    deletefirst();

    printf("\n");
    display(); 
    return 0;
}