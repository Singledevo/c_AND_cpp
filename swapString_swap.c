#include<stdio.h>
void swap (char **str1_ptr, char **str2_ptr)
{
    char *temp= *str1_ptr;
    *str1_ptr= *str2_ptr;
    *str2_ptr= temp;

}
int main()
{
    char *str1="shashank";
    char *str2="prajakta";

    printf("Str1 id : %s, str2 is: %s\n",str1,str2);
    printf("address str1 is =%p, str2 is = %p\n",str1,str2);
    swap(&str1,&str2);
    printf("str1 is = %s str2 is : %s\n",str1,str2);
    printf("address str1 is =%p, str2 is = %p\n",str1,str2);
    return 0;
}