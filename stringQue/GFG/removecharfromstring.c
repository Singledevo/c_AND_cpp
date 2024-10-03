/*Remove characters from the first string which are present in the second string*/

#include<stdio.h>
int main()
{
    // int index=0;
    char str1[]="prajakta";
    char str2[]="shashank";
     int flag=0;
     int j=0;
     int k=0;
    for (int i = 0; i < str2[i]!='\0'; i++)
    {
        for ( j = 0; str1[j]!='\0'; j++)
        {
            if (str2[i]==str1[j])
            {
                flag=1;
                break;
            }
            
        }
        if (!flag)
        {
            str1[k++]=str1[i];
            
        }
        printf("%c",str1[i]);
        
        

    }
    
    return 0;
}