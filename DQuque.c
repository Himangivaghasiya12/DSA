#include<stdio.h>
#define size 5
int deque_arr[size];
int front=-1;
int rear=-1;
void insert_rear()
{
    printf("\n before--> front :%d,rear :%d",front,rear);
    int added_item;
    if((front==0 && rear==size-1)|| (front==rear+1))
    {
        printf("\n Queue overflow");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==size-1)
        rear = 0;
    else
    rear=rear+1;
    printf("\n input the element for adding in Queue :");
    scanf("%d",&added_item);
    deque_arr[rear]=added_item;
    printf("\n after-->fornt :%d,rear :%d",front,rear);
}
void insert_front()
{
    printf("\n after-->front :%d,rear :%d",front,rear);
    int added_item;
    if((front==0 && rear==size-1) || (front==rear+1))
    {
        printf("\n Queue overflow");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(front==0)
        front=size-1;
    else
        front=front-1;
    printf("\n Queue the element for adding in Queue :");
    scanf("%d",&added_item);
    deque_arr[front]=added_item;
    printf("\n after --> fornt :%d",front,rear);
}
void delete_front()
{
    if(front==-1)
    {
        printf("\n Queue underflow \n");
        return;
    }
    printf("\n element deleted from queue is :%d",deque_arr[front]);
    if(front==rear)
    {
        front==-1;
        rear==-1;
    }
    else if(front==size-1)
        front=0;
    else
        front=front+1;
}
void delete_rear()
{
    if(front==-1)
    {
        printf("\n Queue underflow");
        return;
    }
    printf("\n element deleted from Queue is :%d",deque_arr[rear]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(rear==0)
        rear=size-1;
    else
        rear=size-1;
}
void display_queue()
{
    int front_pos=front,rear_pos=rear;
    if(front==-1)
    {
        printf("\n queue is empty");
        return;
    }
    printf("\n queue element :");
    if(front_pos<=rear_pos)
    {
        while(front_pos<=rear_pos)
        {
            printf("\n%d",deque_arr[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos<=size-1)
        {
            printf("\n%d",deque_arr[front_pos]);
            front_pos++;
        }
        front_pos=0;
        while(front_pos<=rear_pos)
        {
            printf("\n%d",deque_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n 1.insert at rear");
        printf("\n 2.insert at front");
        printf("\n 3.delete from rear");
        printf("\n 4.delete from front");
        printf("\n 9,display");
        printf("\n 0.quit");
        printf("\n enter youe choice :");
        scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
        insert_rear();
        break;
    case 2:
        insert_front();
        break;
    case 3:
        delete_rear();
        break;
    case 4:
        delete_front();
        break;
    case 9:
        display_queue();
        break;
    default:
        printf("\n wrong choice \n");
        break;
    }
    }while(choice!=0);
}


/*

#include<stdio.h>
#define n 5
int a[n] , f = -1 , r = -1;

int insert_End(int data)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else if ((r + 1)% n == f)
    {
        printf("Queue Is Full...\n");
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
        printf("Queue Is Empty...\n");
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

int insert_first(int data)
{
    if (f < 0)
    {
        f = r = 0;
        a[f] = data;        
    }
    else if (f == 0)
    {
        printf("\nNot Added To This Position\n");
    }
    else
    {
        f--;
        a[f] = data;
    }
}

int delete_End()
{
    if (r < 0)
    {
        printf("Queue Is Empty.\n");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
   for (int i = f; i <= r; i++)
   {
        printf("%d\t",a[i]);    
   }
}

int main()
{
    insert_End(10);
    insert_End(20);
    insert_End(30);
    insert_End(40);
    delete_First();
    insert_first(50);
    delete_End();
    
    display();
}







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

*/