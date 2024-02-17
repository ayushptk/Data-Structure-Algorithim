#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node nd;
struct Node //reperesenation of stack
{
    int data;
    nd *next;
};
nd *head = NULL;
void push(int);
void pop();
bool isEmpty();
void display();
int main()
{
    int ch, x;
    while (ch != 4)
    {
    	printf("MENU");
        printf("\n 1.push\n 2.pop\n 3.Display\n 4.Exit");
        printf("\n Enter the option:-:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value:");
            scanf("%d", &x);
            push(x);
            printf("\n....... %d value inserted...........\n",x);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("\nThe contents of stack are :\n");
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nEnter Valid Choice\n");
        }
    }
}
void push(int x) //insert the data
{
    nd *newnode = (nd *)malloc(sizeof(nd)); //create a new node
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
        head = newnode;
    else
    {
        newnode->next = head;
        head = newnode;
    }
} 
void pop() //pop the data from stack
{
    if (isEmpty())
        printf("\n.....Stack UnderFlow......\n");
    else
    {
        nd *temp = head;
        head = head->next;
        printf("\n poppped %d from Top of Stack\n", temp->data);
        free(temp);
    }
}
void display()
{
    nd *temp = head;
    if(isEmpty())
        printf("\n.....Stack UnderFlow......\n");
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}

