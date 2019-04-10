/*------------------------------------------------------*/
/*	Author 		:Thennarasu		   	*/
/*	Date		:09-04-2019		   	*/
/*	Filename	:double_linkeed.c	   	*/
/*	Description	:Double linked_list sorting	*/
/*------------------------------------------------------*/




#include "double.h"


struct node
{
	struct node*prev;
	int regno;
	char *name;
	struct node*next;
};
int size=0;
struct node *head = NULL;
struct node *print_ptr = NULL;
struct node *last = NULL;
void insert_node(int data,char *name)
{
	struct node *ptr = (struct node*)malloc(sizeof(struct node));

	ptr->regno = data;
	ptr->name = name;
	if(head == NULL)
		last = ptr;
	else
		head->prev = ptr;
	ptr->next =  head;
	head = ptr;
	size=size+1;
}

void print_node()
{
	print_ptr = head;
	int i=1;
	while(print_ptr != NULL)
	{
		printf("%d\t%d\t%s\n",i++,print_ptr->regno,print_ptr->name);
		print_ptr = print_ptr->next;
	}
}
void reverse_node()
{
	struct node *current = (struct node*)malloc(6*sizeof(struct node));
	current = last;
	int i = 1;
	while(current != NULL)
	{
		printf("%d\t%d\t%s\n",i++,current->regno,current->name);
		current = current->prev;
	}
}

void sort_node()
{
	struct node *current = (struct node*)malloc(sizeof(struct node));
	struct node *sort    = (struct node*)malloc(sizeof(struct node));
	char *temp = malloc(100);
	int i,j,k,l;
	for(i=1;i<size;i++)
	{
		current = last;
		sort = last->prev;
		for(k=1;k<size;k++)
		{
			if(current->regno > sort->regno)
			{
				l = current->regno;
				current->regno = sort->regno;
				sort->regno = l;
			}
			if(strcmp(current->name,sort->name)>0)
			{
				temp = current->name;
				current->name = sort->name;
				sort->name = temp;
			}
			current = current->prev;
			sort = sort->prev;
		}
	}
}


int main()
{
	insert_node(2,"jeeva");
	insert_node(1,"ten");
	insert_node(3,"sathya");
	insert_node(5,"perumal");
	insert_node(4,"rajesh");
	printf("\n");
	print_node();
	sort_node();
	printf("After sort_node\n");
	reverse_node();
	printf("After Reverse_node\n");
	print_node();
}
