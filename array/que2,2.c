/*find the number of triplets count in the array whoes 2 element sum equal to 3rd
example  A[]={1,5,3,2}
3 +2=5  ----->1
2+1 =3 -------2
TOTAL 2 triplets*/

#include<stdio.h>

int main()
{
    int N, start=0, count=0;
    printf("Enter the size of array: ");
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            if (A[i]+A[j]== A[start])
            {
                count++;
            }
            
        }
        
    }
    printf("Number of triplets: %d",count);
    
    return 0;
}