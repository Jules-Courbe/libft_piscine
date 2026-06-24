#include "utile.h"

void	free_list(t_token *head)
{
	t_token	*next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
