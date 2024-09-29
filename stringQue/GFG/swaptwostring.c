#include<stdio.h>
void swap(char **name1, char **name2)
{
    char *temp;
    temp= *name1;
    *name1= *name2;
    *name2= temp;
    
}
int main()
{
    char *str1="shashank";
    char *str2="prajakta";
    swap(&str1, &str2);

    printf("str1: %s & str2: %s ",str1,str2);
    return 0;
}