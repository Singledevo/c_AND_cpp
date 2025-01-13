#include<stdio.h>

int main()
{
    int num;
    int arr[10][10];
    printf("Enter a number: ");
    scanf("%d",&num);
    int i=0;
    while (i<num)
    {
        int j=0;
       while (j<num)
       {
        
        if (i==j)
        {
            printf("\\");
        }
        else if (j==num-i-1)
        {
            printf("/");
        }
        else
        {
            printf("*");
        }
        
        
        j++;
       }
       printf("\n");
       i++;
    }
    

    return 0;
}