#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode, *temp;
    int n, i;

    head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            temp = head;

            while (temp->next != head)
            {
                temp = temp->next;
            }

            temp->next = newnode;
            newnode->next = head;
        }
    }

    printf("\nCircular Linked List:\n");

    if (head != NULL)
    {
        temp = head;

        do
        {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }
        while (temp != head);

        printf("back to head");
    }

    return 0;
}

