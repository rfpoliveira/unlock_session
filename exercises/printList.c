#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void	free_lst(Node *head)
{
/*todo*/
}

void printList(Node *head)
{
/*todo*/
}

int main()
{
    Node *head;

    head = malloc(sizeof(Node));
    head->data = 10;
    head->next = malloc(sizeof(Node));
    head->next->data = 20;
    head->next->next = NULL;

    //Print the linked list
    printList(head);
    
    //Free the allocated memory
	free_lst(head);
    return 0;
}