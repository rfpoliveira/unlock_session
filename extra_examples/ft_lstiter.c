#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void	free_lst(Node* head)
{
	Node *temp;

	while(head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}

void printList(Node* head)
{
	Node *temp;
	
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

void	ft_lstiter(Node *head, void (*f)(int *))
{
	Node *temp;

	temp = head;
	while (temp)
	{
		f(&(temp->data));
		temp = temp ->next;
	}
}
int main(void)
{
    Node *head;

    head = malloc(sizeof(Node));
    head->data = 10;
    head->next = malloc(sizeof(Node));
    head->next->data = 20;
    head->next->next = NULL;

    ft_lstiter(head, add1);

	printList(head);
    
	free_lst(head);
	return (0);
}
