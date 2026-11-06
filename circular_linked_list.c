#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode, *temp, *last;
    int n, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            last = newnode;
            last->next = head;
        }
        else
        {
            last->next = newnode;
            last = newnode;
            last->next = head;
        }
    }

    printf("\nCircular Linked List: ");

    if (head != NULL)
    {
        temp = head;

        do
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        while (temp != head);

        printf("(Back to Head)\n");
    }

    return 0;
}

