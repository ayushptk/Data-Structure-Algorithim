#include <stdio.h>
#include <stdlib.h>

struct Node //representation of linked list
{
    int info;
    struct Node *next;
    struct Node *prev;
};
struct Node *head; // assign a head 

void insertAtBeg(int value) // insert at beginning position         
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node)); //create new node
    newnode->info = value;  
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;  //link with head
        head->prev = newnode;  //link with newnode
        head = newnode;
    }
}

void insertAtEnd(int value)  
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node)); //create a new node
    newnode->info = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void insertAtPos(int value, int pos)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node)); //create a new node
    newnode->info = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (pos < 1)
        printf("Invalid position\n");
    else if (pos == 1)
    {
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    else
    {
        struct Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp != NULL)
        {
            newnode->next = temp->next;
            if (temp->next != NULL)
            {
                temp->next->prev = newnode;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
        else
        {
            printf("Invalid Position!\n");
        }
    }
}

void deleteAtBeg()
{
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        struct Node *temp = head;
        head = temp->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
    }
}

void deleteAtEnd()
{
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        struct Node *temp = head;
        if (temp->next == NULL)
        {
            head = NULL;
        }
        else
        {
            while (temp->next != NULL)
                temp = temp->next;
            temp->prev->next = NULL;
        }
        free(temp);
    }
}

void deleteAtPos(int pos) //insert at specific postion
{
    if (pos < 1)
        printf("Invalid Position\n");
    else if (pos == 1)
    {
        if (head == NULL)
            printf("List is empty\n");
        else
        {
            struct Node *temp = head; // asign a head with new pointer
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
            }
            free(temp);
        }
    }
    else
    {
        struct Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp != NULL && temp->next != NULL)
        {
            struct Node *temp1 = temp->next;
            temp->next = temp1->next;
            if (temp1->next != NULL)
            {
                temp1->next->prev = temp;
            }
            free(temp1);
        }
        else
        {
            printf("Error deleting node\n");
        }
    }
}

void display()
{
    struct Node *temp = head;
    printf("Elements  are : ");
    while (temp != NULL)
    {
        printf("%d == ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int ch, item, pos;
    while (1)
    {
        printf("\nA.INSERTION  \n\t1.InsertAtBeginning\n\t2.InsertAtEnd\n\t3.InsertAtPosition\nB.DELETION\n\t4.DeleteAtBeginning\n\t5.DeleteAtEnd\n\t6.DeleteAtPosition\n7.Display\n8.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Data you want to inseted : ");
            scanf("%d", &item);
            insertAtBeg(item);
            display();
            break;
        case 2:
      printf("Enter Data you want to inseted : ");
            scanf("%d", &item);
            insertAtEnd(item);
            display();
            break;
        case 3:
         printf("Enter Data you want to inseted : ");
            scanf("%d", &item);
            printf("Enter Position: ");
            scanf("%d", &pos);
            insertAtPos(item, pos);
           display();
            break;
        case 4:
            deleteAtBeg();
           display();
            break;
        case 5:
            deleteAtEnd();
           display();
            break;
        case 6:
            printf("Enter Position: ");
            scanf("%d", &pos);
            deleteAtPos(pos);
            display();
            break;
        case 7:
        display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid  Choice\n");
        }
    }
    return 0;
}

