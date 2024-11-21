/* find the one missing element from the array, if the element in the aaray is in sorted 
input: 1,2,3,4,5,7,8
output: 6 */

#include<stdio.h>

int main()
{
    int A[]={1,2,3,4,6,7};
    int lastterm;
    int sum=0;
    printf("Enter the lastterm:");
    scanf("%d",&lastterm);
    int n=sizeof(A)/sizeof(A[0]);
    int total= (float)(lastterm)/2*(A[0]+A[n-1]);
    for (int i = 0; i < n; i++)
    {
        sum=sum+A[i];
    }
    printf("Missing element is : %d",total-sum);
    
    return 0;
}