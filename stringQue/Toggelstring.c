#include<stdio.h>
int main()
{
    char str[50];
    int i=0,n=0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    // printf("%s",str);
    
    while (str[i]!='\0')
    {
        n++;
        i++;
    }
  
    for (int i = 0; str[i]!='\n' ; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i] +32;
        }
        else if (str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        
    }
    printf("%s",str);
    
    return 0;
}