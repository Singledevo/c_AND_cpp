/*Array of A with unsorted element within element N , give the continue subsorted array which is equal to sum S
give input N & S*/

#include<stdio.h>
int main()
{
    int start=0,sum=0,flag=0;
    int A[8];
    for (int i = 0; i <8; i++)
    {
        scanf("%d",&A[i]);
    }

    int S;
    printf("Value  of S: ");
    scanf("%d",&S);

    for (int i = 0; i < 8; i++)
    {
        sum=sum+A[i];
       while (sum>S)
       {
        sum=sum-A[start];
        start++;
       }
    if (S==sum)
    {
        printf("start: %d and end: %d\n", start,i);
        flag=1;
    } 
    }
    if (flag==0)
    {
        printf("No such subarray exists");
    }
    
   
    
    
    return 0;
}