#include<stdio.h>
void linear_search(int[],int,int);
void main()
{
    int a[20],n,x,i;
    printf("how many number enter in list: ");
    scanf("%d",&n);
    printf("\n enter the number in list: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the number to be search in list: ");
    scanf("%d",&x);
    linear_search(a,n,x);
}
void linear_search(int b[],int m,int y)
{
    int i,flag = 0;
    for ( i = 0; i < m; i++)
    {
        if (b[i] == y)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Search is unseccussfull");
    }
    else
    {
        printf("Number found at position %d",i+1);
    }
}