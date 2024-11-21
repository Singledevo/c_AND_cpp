#include<stdio.h>

int main()
{
    int N, start=0, sum=0,S;
    printf("Enter the S: ");
    scanf("%d",&S);
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i=0 ;i < N; i++)
    {
        sum= sum+A[i];
        while (S< sum)
        {
            sum= sum-A[start];
            start++;
        }
        if(S== sum)
        {
            printf("%d %d", start, i);
            return i;
        }
        // printf("%d",sum);
    }
    
    
    return 0;
}