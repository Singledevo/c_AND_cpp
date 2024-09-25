#include <stdio.h>
;
int main() {
char str[40]="shashank Ingle";

char str1[256]={0};


for (int i=0 ; str[i]!='\0'; i++)
{
     str1[str[i]]++;
}
for (int i=0;i<256; i++)
{
    if(str1[i]> 0 && i !=' ' && i != '\n')
    {
        printf("%c : %d\n", i, str1[i]);
    }
}

    return 0;
}