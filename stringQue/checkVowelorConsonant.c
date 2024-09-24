#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the charachter: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("%c is a vowel\n",ch);

    }
    else
    {
        printf("%c is consonent\n",ch);
    }
    return 0;
}