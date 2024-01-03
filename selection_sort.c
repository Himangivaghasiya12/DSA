#include <stdio.h>

int a[100],i ,j,temp,n=8;
int selection_sort()
{
    
    int a[100],i ,j,temp,n=8;
     
     for( i=0; i<n; i++)
    {
        printf("Enter array :");                  
        scanf("%d",&a[i]);
    }
   printf("BEFORE SWAPPING VALUE : ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    for(i=0; i<8;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n AFTER SWAPPING VALUE :");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

}
int main()
{
    selection_sort();
    
}
