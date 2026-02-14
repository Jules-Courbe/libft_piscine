#include "utile.h"

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

int	main(void)
{
	t_node	*head;
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;
	t_node	*tmp;
	t_node *next;

	head = NULL;

	n1 = create_node('A');
	n2 = create_node('B');
	n3 = create_node('C');

	if (n1 == NULL || n2 == NULL || n3 == NULL)
	{
		free(n1);
		free(n2);
		free(n3);
		return (1);
	}
	n1->value = 'A';
	n2->value = 'B';
	n3->value = 'C';

	n1->next = NULL;
	n2->next = NULL;
	n3->next = NULL;

	add_back(&head, n1);
	add_back(&head, n2);
	add_back(&head, n3);

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
