#include "utile.h"

t_node *create_node(char value)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	
	new_node->value = value;
	new_node->next = NULL; 

	return (new_node);
}

void	add_back(t_node **head, t_node *new_node)
{
	t_node *tmp;

	if (new_node == NULL)
		return ;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
}

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
