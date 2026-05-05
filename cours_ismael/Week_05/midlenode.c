#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode *new = malloc(sizeof(struct ListNode) * 4);
    struct ListNode *tmp = head;

    while (head != NULL)
    {
        printf("hello");
        if ((head->val % 2) == 0)
        {
            while (head != NULL)
            {
                new->val = head->val;
                head =  head->next;
                printf("%d", new->val);
            }
        }
        head = head->next;
    }
    return (new);
}

int main()
{
   struct ListNode *list = malloc(sizeof(struct ListNode));
   list = NULL;

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

    middleNode(a);
}