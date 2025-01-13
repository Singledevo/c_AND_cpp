#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;  
};

struct node *HEAD=NULL;

struct node* CreateNote(int data);
void addFirst(int data);
void display(void);

int main()
{
    addFirst(20);
    display();

    return 0;
}
struct node* CreateNote(int data)
{
    struct node *ptr= (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;

    return ptr;
}

void addFirst(int data)
{
    struct node *ptr= CreateNote(data);
    if (HEAD==NULL)
    {
        HEAD=ptr;
    }
    else
    {
        ptr->next=HEAD;
        HEAD=ptr;
    } 
}

void display()
{
    struct node *trav= HEAD;

    while (trav->next !=NULL)
    {
        trav= trav->next;
        printf(" %d ->\n", trav->data );
    }
    
}