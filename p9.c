//10 20 30 40 50 => 50 20 30 40 10 
#include<stdio.h>
void main()
{
    int i,j,m=0,a[5],b[5];

    for(i=0;i<5;i++)
    {
        printf("Enter %d A :",i+1);
        scanf("%d",&a[i]);
        m++;
    }

        m--;
    for(i=0;i<=m;i++)
    {
        if(i==0)
        {
            printf("%d ",a[m]);
        }
        else if(i==m)
        {
            printf("%d ",a[0]);
        }
        else{
            printf("%d ",a[i]);
        }
    }
}

/*  a=1
     i=0
     0+1=1
     1+1=2
     2+1=3
     ........
     m++
        1 2 3 4 5


        m--
         5 4 3 2 1 


         i==0   5 
         i==m   2 3 4 1 


         50 20 30 40 10
         5  2  3  4  1
 */  
  