#include "utile.h"

int	list_size(t_node *head)
{
	t_node *tmp;
	int i;

	i = 0;
	tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}