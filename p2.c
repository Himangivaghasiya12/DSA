/* insert at index-3
 delete at index-3 */

#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,5},v;
    for(int i=7;i>=0;i--)
    {
       // if(a[i]==3)
        //{
         //   v=i;
        //}
        if(i>=2)
        {
            a[i+1]=a[i];
        }
    }
    a[2]=6;
    //printf("%d ",a[3]);
    for(int i=0;i<=8;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}