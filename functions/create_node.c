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