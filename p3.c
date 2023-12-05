#include<stdio.h>

int binary_search(int n,int min, int max)
{
    int mid;

    mid = min+(max-min)/2;

    if(n==mid)
    {
        return 1;
    }
    else if(n>mid)
    {
        min=mid;
        return binary_search(n,min,max);
    }
    else if(n<mid)
    {
         max=mid;
         return binary_search(n,min,max);
    }
    else
    {
          //return -1;
    }
}


int main()
{
    int arr[10]={1,2,3,4,4,5,6,},i,j,k,mid,min,max,x=4,result;
        for(i=0;i<9;i++)
        {
           for(j=9;j<i+1;j--);
            {
                if(arr[i]>arr[j])
                {
                    arr[j]=arr[i]+arr[j];
                    arr[i]=arr[j]-arr[i];
                    arr[j]=arr[j]-arr[i];
                }
            }
        }
        for(i=0;i<10;i++)
        {
           printf("%d" ,arr[i]);
               
        }
        min =arr[0];
        max=arr[9];

            result = binary_search(x,min,max);

            if(result==1)
            {
                printf("\n x is present is array");
            }
            else
            {
                printf("\n x is not present is array");
            }   
return 0;

}