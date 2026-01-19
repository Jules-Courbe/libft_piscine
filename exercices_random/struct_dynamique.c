#include <stdio.h>
#include <stdlib.h>

struct Personne
{
    char *nom;
    int age;
};


int main(void)
{
    struct Personne *p;

    p = malloc(sizeof(struct Personne));
    if (p == NULL)
        return 1;

    p->nom = "Alice";
    p->age = 25;

    printf("%s a %d ans\n", p->nom, p->age);

    free(p);
    return 0;
}

