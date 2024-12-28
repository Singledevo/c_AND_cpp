/*Static Function */

#include<stdio.h>
// #include"file2.c"
int fun (int a , int b);
int main()
{
    int a1,a2;
    printf("ENter the numbers\n");
    scanf("%d %d", &a1,&a2);
    int result=fun(a1,a2);
    printf("%d", result);
    printf("%d %d", a1,a2);
    return 0;
}