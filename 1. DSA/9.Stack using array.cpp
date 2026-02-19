#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

/* Function declarations */
void push();
void pop();
void display();

int main()
{
    int ch;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push (Insert)\n");
        printf("2. Pop (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exit...\n");
                exit(0);

            default:
                printf("Wrong choice!\n");
        }
    }

    return 0;
}

/* Push operation */
void push()
{
    int data;

    if (top == MAX - 1)
    {
        printf("Stack is full (Overflow)\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &data);
        top++;
        stack[top] = data;
        printf("Element inserted successfully\n");
    }
}

/* Pop operation */
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty (Underflow)\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

/* Display stack */
void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

