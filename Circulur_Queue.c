/*
INSERT ->REAR
DELET ->FRONT
INSERT ->FRONT 
DELET ->REAR 

#include<stdio.h>
int front = -1;
int rear = -1;
int queue[10];
int i,n=10;
void insert(int val)
{
    if(rear>n-1)
    {
        printf("QUEUE IS FULL");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=val;
    }
    else
    {
        queue[++rear]=val;
    }
}
int delet()
{
    int x;
    if(front==rear==-1)
    {
        printf("QUEUE IS EMPTY");
    }
    else if(front==rear)
    {
        x=queue[rear];
    }
    else
    {
        x=queue[front++];
        return x;
    }
}
void jinsert(int val)
{
    if(front>n-1)
    {
        printf("\n QUEUE IS FULL");
    }
    else
    {
        int x=rear;
        while(x>=0)
        {
            queue[x+1]=queue[x];
            x--;
        }
        front=0;
        queue[front]=val;
        rear++;
    }
}
int jdelet()
{ 
    rear--;
}
void print()
{
    for(i=front;i<=rear;i++)
    {
        printf("%d \t",queue[i]);
    }
}
int main()
{
    int a,b;
    while(a!=0)
    {
        printf("\n 1.INSERT REAR ");
        printf("\n 2.DELETE FRONT");
        printf("\n 3.INSERT FRONT ");
        printf("\n 4.DELETE REAR ");
        printf("\n 5.PRINT");
        printf("\n ENTER YOUR CHOICE :");
        scanf("%d",&a);

        switch(a)
        {
            case 1:
            scanf("%d",&b);
            insert(b);
            break;
            case 2:
            delet();
            break;
            case 3:
            scanf("%d",&b);
            jinsert(b);
            break;
            case 4:
            jdelet();
            break;
            case 5:
            print();
            break;
            default :
            printf("\n WRONG CHOICE ");
            break;
            

        }
    }
}

 #include<stdio.h>
#define n 10
int a[n],f=-1,r=-1;

int display()
{
     for(int i=f; i!=r; i=(i+1)%n)
    {
        printf("%d ",a[i]);
    } 
}
int insertfirst(int val)
{
    if(r<0)
    {
         f = r = 0;
        a[r]=val;
    }
    else if((r+1)%n == f)
    {
        printf("Queue is full...");   
    }
   else
    {
        r=(r+1)%n;
        a[r] = val;
    }   
}

*/

#include<stdio.h>
#define n 5
int a[n] , f = -1 , r = -1;

int insert_First(int data)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else if ((r + 1)% n == f)
    {
        printf("<-------------Queue Is Full-------->\n");
    }
    else
    {
        r = (r + 1)% n;
        a[r] = data;
    }
}

int delete_First()
{
    if (f < 0)
    {
        printf("<-------------Queue Is Empty-------->\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1 ) % n;
    }
}

int display()
{
    int i = f;
    if (f < 0)
    {
        printf("<------------Queue Is Empty--------->\n");
    }
    else
    {
        do
        {
            printf("%d\t",a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}

int main()
{
    insert_First(10);
    insert_First(20);
    insert_First(30);
    insert_First(40);
    delete_First();
    insert_First(50);
    insert_First(60);
    delete_First();


   // delete_First();
   insert_First(70);
    //insert_First(80);
    //delete_First();
    //insert_First(90);
    display();
}