#include<stdio.h>

int main()
{ int n=0;
    char *str= "shashank ingle";
    //1st way to access the each character of char *str="shashank ingle"
    // for (int i = 0; str[i]!='\0'; i++)
    // {
    //     printf("%c ",str[i]);
    // }


    //2nd way to access the each charater of the char *str= "shashank ingle"
    // for (; *str!='\0'; str++)// no need to initialize the for loop that why we use while loop
    // {
    //     printf("%c ",*str);
    // }
    while (*str!='\0')
    {
        printf("%c ",*str);
        str++;
        n++;
    }
    
    // printf("%d",n);

    //main code 

    return 0;
}