#include<stdio.h>
#define BV(x) ((1<<x))
int a= 0b1010; // 1010 
int main()
{
    for (int i = 0; i < 10; i++)
    {
       //int a= 0b1010; // 1010  //output: 888888888
        a= a^BV(1);
        printf("%d ",a);
    }
    
    

    return 0;
}