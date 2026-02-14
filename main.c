#include "utile.h"

int	main(void)
{
	t_node	*head;
	t_node	*tmp;
	t_node *next;
	int i;
	t_node *n[10];

	head = NULL;

	i = 0;
	
	while (i < 10)
	{
		n[i] = create_node('A');
		add_back(&head, n[i]);
		i++;
	}

	printf("%d\n", list_size(head));

	tmp = head;
	while (tmp != NULL)
	{
		write(1, &tmp->value, 1);
		tmp = tmp->next;
	}
	write(1, "\n", 1);

	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	return (0);
}
