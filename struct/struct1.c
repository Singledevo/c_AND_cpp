// #include<stdio.h>
// struct  person{
// char *name;
// int age;
// };
// int main()
// {
//     struct person p1;
//     p1.name="shashank";
//     p1.age=23;

//     printf("%s %d",p1.name,p1.age);

//     return 0;
// }


/*creating typedef means we are creating * struct admi * alias as * per *   */

// typedef struct admi{
// char *nam;
// int umer;
// }per;
// int main()
// {
//     per p2;
//     p2.nam="prajakta";
//     p2.umer=20;

// printf("%s %d",p2.nam,p2.umer);

// }

typedef struct  {  // if we are writting typedef, then there is no need to write structure  name
char *name;
int age;
}person;
int main()
{
    person p1;
    p1.name="shashank";
    p1.age=23;

    printf("%s %d",p1.name,p1.age);

    return 0;
}