#include<stdio.h>

int main()
{   int n=0;
    
    char arr[20];
    char freq[256]={0};
    printf("Enter the string : ");
    scanf("%s",arr);
   for (int i = 0; arr[i]!='\0'; i++)
   {
         n++;
   }
   

    for (int i = 0; arr[i]!='\0'; i++)
    {
        freq[arr[i]]++;
    }
    char max='\0';int maxfreq;
    for (int i = 0; i <256; i++)
    {
        if(freq[i]>0)
        {
            printf("%c : %d\n",i,freq[i]);
        }
        
        if (max<freq[i])
        {
            
            maxfreq=freq[i];
            max=i;
            
        }
        
    }
    
    printf("%c: %d\n",max,maxfreq);


    return 0;
}