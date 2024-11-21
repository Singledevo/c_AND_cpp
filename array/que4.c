/*Given two sorted arrays a[] and b[] in non-decreasing order. 
Merge them in sorted order without using any extra space.
Modify a so that it contains the first n elements and modify b so that it contains the last m elements.
Input: a[] = [1, 3, 5, 7], b[] = [0, 2, 6, 8, 9]
Output: a[] = [0, 1, 2, 3], b[] = [5, 6, 7, 8, 9]
Explanation: After merging the two non-decreasing arrays, we get, 0 1 2 3 5 6 7 8 9*/

#include<stdio.h>
void swap(int *num1, int *num2)
{
    int  temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if (arr[i]>arr[j])
           {
            swap(&arr[i], &arr[j]);
           }
           
        }
        
    }
    
}
int main()
{
    int arr1[]={1,4,6,7};
    int arr2[]={0,2,3,5,8};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    int i=n-1, j=0;
    while (i>=0 &&  j<m)
    {
       
        if(arr1[i]>arr2[j])
        {

            // printf("sfg");
            swap(&arr1[i],&arr2[j]);
        }
        i--;
        j++;
    }
    
    sort(arr1,n); // done selection sort, but prefferred insertion sort or merge sort for less time complexcity
    sort(arr2,m);
    for (int i = 0; i <n; i++)
    {
        printf("%d",arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d",arr2[i]);
    }
    
    
    

    return 0;
}