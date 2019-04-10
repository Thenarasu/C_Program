/*------------------------------------------------------*/
/*	Author 		:Thennarasu		   	*/
/*	Date		:09-04-2019		   	*/
/*	Filename	:single_linked_list.s	   	*/
/*	Description	:single linked_list sorting	*/
/*------------------------------------------------------*/




#include "single.h"

void print_node();
void insert_node(int ,char*);
void sort_node();
struct node 
{
	int regno;
	char *name;
	struct node *next;
};

int size = 0;

struct node *head = NULL;
struct node *print_list = NULL;

void reverse_list(struct node **one)
{
	struct node *prev = NULL;
	struct node *current = *one;
	struct node *last;

	while( current !=NULL)
	{
		last = current->next;
		current->next = prev;
		prev = current;
		current =last;
	}

	*one = prev;

}

int main()
{
	insert_node(1,"thennarasu");
	insert_node(2,"senthil");
	insert_node(3,"chaina");
	insert_node(4,"sugu");
	insert_node(5,"rajesh");
	insert_node(6,"madhu");
	print_node();
	printf("After sorting\n");
	sort_node();
	print_node();

	printf("After riverse\n");
	reverse_list(&head);
	print_node();
}

void insert_node(int data,char *name1)
{
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	size = size+1;

	ptr->regno = data;
	ptr->name = name1;
	ptr->next = head;
	head = ptr;
}

void print_node()
{
	print_list = head;
	int i=1;

	while(print_list != NULL)
	{
		printf("%d\t%d\t%s\n",i++,print_list->regno,print_list->name);
		print_list = print_list->next;
	}
}

void sort_node()
{

	struct node *current;
	struct node *sort;

	char*temp = malloc(100);

	int j,k,l,m;

	j=size;
	for(k=1;k<size;k++,j--)
	{
		current = head;
		sort = head->next;
		for(l=1;l<j;l++)
		{
			if(strcmp(current->name,sort->name)>0)
			{
				temp= current->name;
				current->name = sort->name;
				sort->name = temp;
			}
			current = current->next;
			sort = sort->next;
		}

	}
}
