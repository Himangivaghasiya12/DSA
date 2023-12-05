#include<stdio.h>
int main()
{
    int a=10;
    printf("a: %d a: %d\n",a,a++);                              
    printf("a: %d a: %d\n",a,++a);                           
    printf("a: %d a: %d\n",a++,a++);                         
    printf("a: %d a: %d\n",a++,++a);                         
    printf("a: %d a: %d\n",++a,++a);
    printf("a: %d a: %d a: %d\n",a,a++,++a);
    printf("a: %d a: %d a: %d\n",a,++a,a++);
    printf("a: %d a: %d a: %d\n",a++,++a,a++);
    printf("a: %d a: %d a: %d\n",a++,++a,++a);
    printf("a: %d a: %d a: %d\n",++a,++a,++a);
    printf("a: %d a: %d a: %d\n",++a,++a,a++);
    printf("a: %d a: %d a: %d\n",a++,++a,a++);
    printf("a: %d a: %d a: %d\n",++a,a++,++a);
    printf("a: %d a: %d a: %d a: %d\n",a,++a,a++,++a);
    printf("a: %d a: %d a: %d a: %d\n",a++,++a,a++,a++);

}
/*  
      
   1. Two array merge
   2. 10 20 30 40 50 --> 50 20 30 40 10
   3. 10 20 30 40 50 --> 20 30 40 50 10



*/