#include "utile.h"

void	free_list(t_token *head)
{
	t_token *next;
	t_token *tmp;

	tmp = head;
	
	while (tmp != NULL)
	{
		next = tmp->next;  // On sauvegarde l’adresse du prochain noeud AVANT de libérer le courant

		free(tmp->value);  // On libère le bloc mémoire alloué pour la chaîne pointée par value

		free(tmp);  // On libère le bloc mémoire de la structure t_token elle-même

		tmp = next;  // On avance dans la liste

	}
}