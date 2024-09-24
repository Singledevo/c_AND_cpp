#include<stdio.h>

char tolower(char ch)
{
    if(ch>=65 && ch<=90)
    {
        return ch +32;
    }
    return ch;
}
int main()
{
    char ch;
    printf("Enter the charachetr: ");
    scanf("%c",&ch);
   
    ch= tolower(ch);
    
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is vowel",ch);
    }
    else{
        printf("%c is consonat",ch);
    }
    
    return 0;
}