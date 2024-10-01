#include<stdio.h>
int palindromcheck(char str[], int size)
{
    for (int i = 0; i <= size/2; i++)
    {
        if(str[i]!=str[size-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n=0,i=0;
    char arr[20];
    printf("Enter the string: ");
    scanf("%s",arr);
    while (arr[i]!='\0')
    {
        n++;
        i++;
    }
    int ISplaindrone=palindromcheck(arr,n);
    if (ISplaindrone)
    {
        printf("string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome\n");
    }
    
    
    return 0;
}