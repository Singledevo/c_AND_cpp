#include<stdio.h>

int main()
{
    //1)
    int arr[10]={[0 ... 9]=5}; // initialize all elements to 5
    for (int i = 0; i <10; i++)
    {
        printf("%d ",arr[i]); // output: 5 5 5 5 5 5 5 5 5 5
    }
    int arr1[10]={6};
    for (int i = 0; i <10; i++)
    {
        printf("\n%d ",arr1[i]); // output: 6 0 0 0 0 0 0 0 0
    }
    int arr2[10];
    for (int i = 0; i <10; i++)
    {
        printf("%d ",arr2[i]); // output: garbage value
    }
    return 0;
}
 