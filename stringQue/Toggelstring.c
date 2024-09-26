#include<stdio.h>
int main()
{
    char str[50];
    int i=0,n=0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);// if we are taking input as Sentence from the user then use fgets() function
    // because if give input "shashank ingle" the it store  "s h a s h a n k   i n g l e " store black space between
    // while scanf() function can;t storee the sentence it store the word and end work with '\0'
    // printf("%s",str);
    
   
  
    for (int i = 0; str[i]!='\n' ; i++)// condition till neew line
    
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