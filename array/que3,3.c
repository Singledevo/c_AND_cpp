/*find the missing number in the sorted array 
ex 1 2 3  5 6 7 8  9
missing element is 4 */

#include<stdio.h>

int main()
{
    
    int N, sum=0 , total =0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int A[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        sum=sum+A[i];
    }
    
    total= (N+1)*(N+2)/2;
    // printf("%d\n",total);
    printf("Missing number is %d", total - sum);
    
/*Formula for Total: The sum of numbers from 1 to n is calculated using the formula:
Sum=(n×(n+1))/2
 
Here, n = N + 1 because one number is missing in the sequence of size N + 1.*/
    
    return 0;
}