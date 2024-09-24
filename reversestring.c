#include<stdio.h>

int main()
{
    char str[40]; int n=0;
  
    printf("ENter the string: ");
    scanf("%s",str);
      while (str[n]!='\0')
    {
        n++;
    }
    for (int i = 0; i < n/2; i++)
    {
        char temp= str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp; 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c ",str[i]);
    }
    printf("%s ",str);
    
    return 0;
}