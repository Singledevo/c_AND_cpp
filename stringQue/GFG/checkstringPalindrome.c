#include<stdio.h>
#include<stdlib.h>

int stringPalindrome(char *ptr, int n)
{
    for (int i = 0; i < n/2; i++)
    {
        if((ptr[i])!= ptr[n-i])
        // printf("%c",*(ptr+n-i));
        {
            return 0;
        }
        
    }
    return 1 ;
}
int main()
{
    int size=15;
    int stringsize=0;
    char *str;
    str=(char *)malloc(sizeof(char)*size);
    printf("Enter the string: ");
    fgets(str,size,stdin);
    printf("%s",str);
    while(*str!='\n')
    {
        stringsize++;
        str++;
    }
    printf("%d",stringsize);
    int ISpalindrome =stringPalindrome(str,stringsize);
    printf("%d",ISpalindrome);
    if (ISpalindrome)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
    
    return 0;
}