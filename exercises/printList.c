#include <stdio.h>
#include <stdlib.h>

typedef struct s_Node {
    int data;
    struct s_Node *next;
} t_Node;

void	free_lst(t_Node *head)
{
/*todo*/
}

void printList(t_Node *head)
{
/*todo*/
}

int main()
{
    t_Node *head;

    head = malloc(sizeof(t_Node));
    head->data = 10;
    head->next = malloc(sizeof(t_Node));
    head->next->data = 20;
    head->next->next = NULL;

    //Print the linked list
    printList(head);
    
    //Free the allocated memory
	free_lst(head);
    return 0;
}