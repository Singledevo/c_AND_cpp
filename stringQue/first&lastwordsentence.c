/*making first and last word of the word in a sentence*/
#include<stdio.h>

int main()
{
    int n=0,i=0;
    char str[]="shashank ingle";
    while (str[i]!='\0')
    {
        n++;
        i++;
    }
    // printf("%d",n);
    for (int i = 0; i < n; i++)
    {
        if (i==0 || i==n-1)
        {
            str[i]=str[i]-32;
        }
        else if (str[i]==' ')
        {
            str[i-1]=str[i-1]-32;
            str[i+1]=str[i+1]-32;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c ",str[i]);
    }
    
    
    
    return 0;
}