#include<stdio.h>
void strstr(char arr[],char arr1[],int size, int newsize);
int main()
{
    int n=0,i=0,j=0,m=0;
    char str[20];
    char str2[10];
    printf("ENter the string: ");
    scanf("%s",str);
    printf("Enter the string to find: ");
    scanf("%s",str2);
    while (str[i]!='\0')
    {
        n++;
        i++;
    }
    while (str2[j]!='\0')
    {
        m++;
        j++;
    }
    
    strstr(str,str2,n,m);
    

    return 0;
}
void strstr(char arr[],char arr1[], int size, int newsize)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < newsize; j++)
        {
           if (arr[i-1]==arr1[j])
        {
            printf("%c",arr[i]);
        }
        else{
            break; //Input: pratibha & tibha  
            //'p' aagar 't' k equal nhi hai to vo baki k "ibha" nhi check karega 
        }
        }
        
           
    }
    
}