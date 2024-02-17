#include <stdio.h>
#include <stdlib.h>

//represenation of queue
typedef struct node { 
    int data;
    struct node *next;
} cq;

cq *front = NULL;
cq *rear = NULL;

int isEmpty() {
    return front == NULL;
}

void Enqueue(int x) {
    cq *newNode = (cq*)malloc(sizeof(cq));
    newNode->data = x;
    newNode->next = NULL;

    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int Dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return -1;
    } else {
        cq *temp = front;
        int data = temp->data;
        front = front->next;
        free(temp);
        return data;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
    } else {
        cq *temp = front;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int ch, x;
    while (1) {
    	printf("\nMENU ");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter the option:");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("Enter the data to be enqueued:");
            scanf("%d", &x);
            Enqueue(x);
            break;
        case 2:
            x = Dequeue();
            if (x != -1)
                printf("%d dequeued\n", x);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}

