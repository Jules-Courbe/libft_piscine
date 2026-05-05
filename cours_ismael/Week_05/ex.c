#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct noeud{
    int valeur;
    struct noeud *next;
};

void ajouterFin(struct noeud *tete, int valeur)
{
    struct noeud *nouveau;

    while (tete->next != NULL)
        tete = tete->next;
    
    nouveau = malloc(sizeof(struct noeud));

    tete->next = nouveau;
    nouveau->valeur = valeur;
    nouveau->next = NULL;
}


void afficherListe(struct noeud *tete)
{
    while (tete != NULL)
    {
        printf("%d", tete->valeur);
        tete = tete->next;
        printf("\n");
    }
}

struct noeud* ajouterDebut(struct noeud *tete, int valeur)
{
    struct noeud *nouveau = malloc(sizeof(struct noeud));
    nouveau->valeur = valeur;
    nouveau->next = tete;

    return (nouveau);
}

int tailleListe(struct noeud *tete)
{
    int sum = 0;

    while (tete != NULL)
    {
        sum += 1;
        tete = tete->next;
    }
    return (sum);
}

struct noeud* reverseList(struct noeud* tete) {
    struct noeud *precedent;
    struct noeud *curr;
    struct noeud *next;

    curr = tete;
    precedent = NULL;
    next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = precedent;
        precedent = curr;
        curr = next;
    }
    curr = NULL;

    return (precedent);
}

bool hasCycle(struct noeud *head) {
    struct noeud *slow;
    struct noeud *fast;

    slow = head;
    fast = head;

    while (slow != NULL)
    {
        fast = slow->next->next;
        slow = fast->next;
    
        if (slow == fast)
            return (true);
    }
    return (false);
}
int main()
{
    struct noeud a;
    struct noeud b;
    struct noeud c;

    a.valeur = 5;
    a.next = &b;
    b.valeur = 9;
    b.next = &c;
    c.valeur = 12;
    c.next = NULL;

    struct noeud *tete = &a;
    tete = ajouterDebut(tete, 0);
    ajouterFin(tete, 20);
    afficherListe(tete);
    //printf("%d", hasCycle(tete));
    //printf("%d", tailleListe(tete));
    printf("\n");
    printf("\n");


    tete = reverseList(tete);

    while (tete != NULL)
    {
        printf("%d\n", tete->valeur);
        tete = tete->next;
    }


    return 0;
}