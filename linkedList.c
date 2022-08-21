#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
node *create();
void display(node *);
void main()
{
    int choice;
    node *head;
    head = NULL;
    while (1)
    {
        printf("\nPress 1 to create a list:");
        printf("\nPress 2 to display a list:");
        printf("Eneter your choice:");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            head = create(head);
            break;
        case 2:
            head = display(head);
            break;
            exit(0);
        default:
            printf("you have entered wrong choice");
            break;
        }
    }
}
node *create()
{
    node *p, *temp, *head;
    head = (node *)malloc(sizeof(node));
    head->next = NULL;
    printf("\n\n\t Enter data to insert or -999 to stop");
    scanf("%d", &head->info);
    p = head;
    while (p->info != -999)
    {
        temp = (node *)malloc(sizeof(node));
        temp->next = NULL;
        scanf("%d", temp->info);
        p->next = temp;
        p = temp;
    }
}   
    void display(node *head)
    { 
        int a[100],i
        node *tmp;
        tmp = head;
        clrscr();
        if (head == NULL)
        {
            printf("\n\n\t\tThere is no element in the linked list.");
            printf("\n\n\t\tPlease inseart some elements first then try again.");
        }
        else
        {
            printf("\n\n\t\tYour list is as follows --\n");
            while (tmp != NULL)
            {
                printf("\n\t\t%d", tmp->info);
                tmp = tmp->next;
            }
        }
    }
