#include <stdio.h>
#include <stdlib.h>

typedef struct s_Node {
    int data;
    struct s_Node* next;
} t_Node;

void	free_lst(t_Node* head)
{
	t_Node *temp;

	while(head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}

void printList(t_Node* head)
{
	t_Node *temp;
	
	temp = head;
	while(temp)
	{
		printf("%i\n", temp->data);
		temp = temp->next;
	}
}

void add1(int *data)
{
	(*data)++;
}

void	ft_lstiter(t_Node *head, void (*f)(int *))
{
	t_Node *temp;

	temp = head;
	while (temp)
	{
		f(&(temp->data));
		temp = temp ->next;
	}
}
int main(void)
{
    t_Node *head;

    head = malloc(sizeof(t_Node));
    head->data = 10;
    head->next = malloc(sizeof(t_Node));
    head->next->data = 20;
    head->next->next = NULL;

    ft_lstiter(head, add1);

	printList(head);
    
	free_lst(head);
	return (0);
}
