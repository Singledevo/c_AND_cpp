#include<stdio.h>
int a= 0b1010;//1010 =10
int main()
{
    for (int i = 0; i < 10; i++)
    {
        

        a = a^(1<<1);
        printf("%d ",a);
    }
    
    return 0;
}