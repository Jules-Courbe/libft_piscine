#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

struct node{
    int valeur;
    struct node *next;
};

bool hasCycle(struct node *head) {
    struct node *slow;
    struct node *fast;

    slow = head;
    fast = head;

    printf("slow : %d\n", slow->valeur);
    printf("Fast : %d\n", fast->valeur);

    printf("slow : %d\n", slow->next->valeur);
    printf("Fast : %d\n", fast->next->next->valeur);

    // Comment eviter le core dumped. 
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return (false);
    }
    return (true);
}

void free_list(struct node *head)
{
    struct node *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

int main()
{
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;

    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));

    a->valeur = 1;
    a->next = b;
    b->valeur = 2;
    b->next = c;
    c->valeur = 3;
    c->next = NULL;

    printf("%d", hasCycle(a));

    free_list(a);
}