#include<stdio.h>
void swap (int arry[])
{
    for ( int i = 0, j=1; i <10 && j<=10; i+=2,j+=2)
    {
        // printf("hello");
        int temp= arry[i];
        arry[i]=arry[j];
        arry[j]=temp;
    }
    
}
int main()
{
    int size;
    // printf("Enter the size of array: ");
    // scanf("%d",&size);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    swap(arr);
    for (int i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}