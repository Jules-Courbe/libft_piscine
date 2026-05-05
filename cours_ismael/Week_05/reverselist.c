#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

void print_list(struct ListNode *head)
{
    while (head != NULL)
    {
        printf("%d", head->val);
        if (head->next)
            printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

void free_list(struct ListNode *head)
{
    struct ListNode *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *precedent;
    struct ListNode *courrant;
    struct ListNode *next;

    courrant = head;
    precedent = NULL;
    next = NULL;

    while (courrant != NULL)
    {
        next = courrant->next;
        courrant->next = precedent;
        precedent = courrant;
        courrant = next;
    }
    courrant = NULL;

    return (precedent);
}

int main()
{
    struct ListNode *list = NULL;

    struct ListNode *a;
    struct ListNode *b;
    struct ListNode *c;
    struct ListNode *d;

    a = malloc(sizeof(struct ListNode));
    b = malloc(sizeof(struct ListNode));
    c = malloc(sizeof(struct ListNode));
    d = malloc(sizeof(struct ListNode));
    
    a->val = 1;
    a->next = b;
    b->val = 2;
    b->next = c;
    c->val = 1;
    c->next = d;
    d->val = 3;
    d->next = NULL;

    list = reverseList(a);

    print_list(list);
    free_list(list);
}
