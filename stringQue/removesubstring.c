#include<stdio.h>

void removesub(char str[],int start,int end,int size)
{
    
    for (int i = 0; i < size; i++)
    {
        if (start<=end)
        {
            str[start+i-1]=str[end+i];
        }
        
    }
    
}
int main()
{
    int start, end,n=0,i=0;
    char arr[]="shashank";
    printf("Enter the starting index : ");
    scanf("%d",&start);
    printf("Enter the ending index : ");
    scanf("%d",&end);
    while (arr[i]!='\0')
    {
        n++;
        i++;
    }
    
    removesub(arr,start,end,n);
    printf("%s\n",arr);

    return 0;
}