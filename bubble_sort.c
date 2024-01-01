#include <stdio.h>
#include<stdlib.h>

int a[100],i ,j,temp,n=8;
int bubble_sort()
{

     
    for( i=0; i<8; i++)
    {
        a[i]=rand()%50;
       // printf("Enter array :");
        //scanf("%d",&a[i]);
    }
    printf("BEFORE SWAPPING VALUE : ");
    for(i=0;i<8;i++)
    {
        printf(" %d",a[i]);
    }
}

 int condition()
 {
    
    for(i=0; i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n AFTER SWAPPING VALUE :");
    for(i=0;i<8;i++)
    {
        printf(" %d",a[i]);
    }
}

int main()
{
    bubble_sort();
    condition();
}