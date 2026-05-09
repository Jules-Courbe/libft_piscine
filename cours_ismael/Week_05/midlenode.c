#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
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

struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode *tmp = head;
    int max = 0;
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }

    max = count / 2;
    count = 0;
    head = tmp;

    while (count <= max)
    {
        head = head->next;
        count++;
    }
    
    return (head);
}

int main()
{
   struct ListNode *list = malloc(sizeof(struct ListNode));
   list = NULL;

    struct ListNode *a;
    struct ListNode *b;
    struct ListNode *c;
    struct ListNode *d;
    struct ListNode *e;

    a = malloc(sizeof(struct ListNode));
    b = malloc(sizeof(struct ListNode));
    c = malloc(sizeof(struct ListNode));
    d = malloc(sizeof(struct ListNode));
    e = malloc(sizeof(struct ListNode));

    
    a->val = 1;
    a->next = b;
    b->val = 2;
    b->next = c;
    c->val = 3;
    c->next = d;
    d->val = 4;
    d->next = e;
    e->val = 5;
    e->next = NULL;

    list = middleNode(a);

    print_list(list);
}