#include<stdio.h>

int main()
{
    int num , i=0;
    int store[32];
    printf("Enter the number :");
    scanf("%d",&num);
    for ( i = 0; num>0; i++)
    {
       
        store[i]=num%2;
        num = num/2; // num/=2
        
    }
    for (int j =i-1; j>=0; j--)
    {
        printf("%d ", store[j]);
    }
    

    
    return 0;
}