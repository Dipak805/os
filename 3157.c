#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}NODE;
NODE *create(struct node *head)
{
int i,n;
struct node *temp,*newnode;
printf("enter limit=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(NODE*)malloc(sizeof(NODE));
printf("enter value=");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
}
return head;
}
void display(struct node *head)
{
NODE *temp;
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d\t",temp->data);
}
}
void search(NODE *head,int num)
{
NODE *temp;
int f=0,i;
for(temp=head,i=1;temp!=NULL;temp=temp->next,i++)
{
if(temp->data==num)
{
f=1;
break;
}
}
if(f==1)
printf("data is found at position=%d",i);
else
printf("data is not found");
}

int main()
{
int ch,num;
NODE *head=NULL;
do
{
printf("\n 1-create \n 2-display \n 3-search");
printf("\n enter your chioce=");
scanf("%d",&ch);
switch(ch)
{
case 1:head=create(head);
	break;
case 2:display(head);
	break;
case 3:printf("enter element to search=");
	scanf("%d",&num);
	search(head,num);
	break;
}
}while(ch<4);
}
