#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int a[MAX];
int front = -1, rear = -1;

void enqueue();
void dequeue();
void display();

int main()
{
    int ch;

    while (1)
    {
        printf("\n--- Queue Using Array ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Wrong choice!\n");
        }
    }

    return 0;
}

void enqueue()
{
    int data;

    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)   // first insertion
        {
            front = 0;
        }

        printf("Enter element: ");
        scanf("%d", &data);

        rear++;
        a[rear] = data;
    }
}


void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", a[front]);
        front++;
    }
}

void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

