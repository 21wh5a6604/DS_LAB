#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*head = NULL,*cur,*temp;
struct node*create()
{
	int n,i;
	printf("enter no.of elements");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		cur=(struct node*)malloc(sizeof(struct node));
		scanf("%d", &(cur->data));
		cur->link=NULL;
		if(head == NULL)
		{
			head = cur;
		}
		else
		{
			temp = head;
			while(temp->link!=NULL)
				temp = temp->link;
				temp ->link = cur;
		}
		}
		return head;
}
struct node*insert_begin()
{
	cur = (struct node*)malloc(sizeof(struct node));
	printf("enter the data values");
	scanf("%d",&(cur->data));
	cur->link=head;
	head = cur;
	return head;
}
struct node*insert_end()
{
	cur = (struct node*)malloc(sizeof(struct node));
	printf("enter the data value");
	scanf("%d",&(cur->data));
	temp= head;
	while(temp->link !=	NULL)
	{
		temp= temp->link;
	}
	temp->link = cur;
	cur->link=NULL;
	return head;
}
struct node*insert_pos()
{
	int c=1,pos;
	cur= (struct node*)malloc(sizeof(struct node));
	printf("enter the data value");
	scanf("%d",&(cur->data));
	printf("enter the pos");
	scanf("%d",&pos);
	temp = head;
	while(c<pos-1)
	{
		temp=temp->link;
		c++;
	}
	cur->link=temp->link;
	temp->link=cur;
	return head;
}

void display(struct node*head)
{
	temp = head;
	while(temp != NULL)
	{
		printf("%d->",temp->data);
		temp = temp->link;
	}
}
int main()
{
	create();
	display(head);
	insert_begin();
	display(head);
	insert_end();
	display(head);
	insert_pos();
	display(head);
}
