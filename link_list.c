#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node* createNode(int data);
void add_first(int data);
void display();
int main()
{
    add_first(20);
    add_first(10);
    display();
    return 0;
}
struct node* createNode(int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    return ptr; 
}
void add_first(int data)
{
    struct node* ptr=createNode(data);
    if (head==NULL)
    {
        head=ptr;
    }
    else
    {
        ptr->next=head;
        head=ptr;
    }
}
void display()
{
    struct node *trav=head;
    while (trav !=NULL)
    {
        printf("->%d",trav->data);
        trav=trav->next;
    }
    
}