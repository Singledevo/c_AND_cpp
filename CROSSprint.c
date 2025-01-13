#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i=0;
    while (i<num)
    {
        int j=0;
       while (j<num)
       {
        printf("*");
        if (i==j)
        {
           
        }
        j++;
       }
       printf("\n");
       i++;
    }
    

    return 0;
}