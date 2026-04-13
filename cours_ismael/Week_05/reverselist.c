#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *create_node(int value)
{
    struct ListNode *new_node;

    new_node = malloc(sizeof(struct ListNode));
    if (!new_node)
        return NULL;

    new_node->val = value;
    new_node->next = NULL;

    return new_node;
}

void append_node(struct ListNode **head, int value)
{
    struct ListNode *new_node = create_node(value);
    struct ListNode *tmp;

    if (!new_node)
        return;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    tmp = *head;
    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = new_node;
}

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

    append_node(&list, 1);
    append_node(&list, 2);
    append_node(&list, 3);
    append_node(&list, 4);

    list = reverseList(list);

    print_list(list);
    free_list(list);
}
