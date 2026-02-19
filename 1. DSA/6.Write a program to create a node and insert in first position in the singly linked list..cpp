#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node * next;
};
struct node * Insinbeg(struct node * );
void Display(struct node * );
struct node * Insinbeg(struct node * head)
{
	struct node * new1;
	new1=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data you insert at first : ");
	scanf("%d",&new1->data);
	new1->next=NULL;
	if(head==NULL)
	{
		head=new1;
	}
	else
	{
	new1->next=head;
	head=new1;	
	}
	return head;
}
void Display(struct node * head)
{
	if (head==NULL)
	{
		printf("The list is empty");
	}
	else
	{
		struct node * p;
		printf("\nThe Linked List is....\n ");
		for(p=head;p!=NULL;p=p->next)
		{
			printf("|%d|->",p->data);
		}
		printf("Null \n");
	}
}
int main() {
    struct node *head = NULL;
    int n, i;
    printf("Enter how many values do you want to insert :  ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
      head = Insinbeg(head);
    }
    Display(head);
    return 0;
}
