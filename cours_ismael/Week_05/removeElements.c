#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *next;
};

// pour supprimer un node il faut le free
struct node* removeElements(struct node* head, int val) 
{
    struct node faux;
    faux.next = head;
    struct node *curr = &faux;

    while (head != NULL && head->next != NULL)
    {
        if (head->next->val == val)
        {
            // Le free libere la l'adresse memoire du node a suprimer
            struct node *tmp = head->next;
            head->next = head->next->next;
            free(tmp);
        }
        else
        {
            head = head->next;
        }
    }
    head = faux.next;
    return head;
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
  list = removeElements(a, 3);
  afficherListe(list);
  free_list(list);
  return 0;

}