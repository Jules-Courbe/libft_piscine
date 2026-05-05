#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *next;
};

struct node* removeElements(struct node* head, int val) 
{
    struct node *new;
    new = malloc(sizeof(struct node) * val);

    while (head != NULL)
    {
        if (head->val == val)
            {
                head = head->next;
            }
        new->val = head->val;
        printf("%d", new->val);
        head = head->next; 
    }

    return (new);
}

void afficherListe(struct node *head)
{
    while (head != NULL)
    {
        printf("%d", head->val);
        head = head->next;
        printf("\n");
    }
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
  struct node *e;
  struct node *list;

  list = NULL;
  
  a = malloc(sizeof(struct node));
  b = malloc(sizeof(struct node));
  c = malloc(sizeof(struct node));
  d = malloc(sizeof(struct node));
  e = malloc(sizeof(struct node));

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

  afficherListe(a);
  printf("\n");
  removeElements(a, 3);

}