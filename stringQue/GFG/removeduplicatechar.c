#include<stdio.h>

int main()
{
    int size=0;
    char arr[]="shashank";
    int i=0;
    while (arr[i]!='\0')
    {
        size++;
        i++;
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[j]=' ';
                
            }
  
        }
        
    }
    for (int i = 0; arr[i]!=' ' || arr[i]!='\0'; i++)
    {
       printf("%c",arr[i]);
    }
    
    
    

    return 0;
}