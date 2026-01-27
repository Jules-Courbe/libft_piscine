#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int	data;
	struct	s_list *next;
}	t_list;


t_list	*ft_lstnew(int value)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	 if (new == NULL)
	 {
		return (NULL);
	 }
	 new -> data = value;
	 new -> next = NULL;
	 return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int main(void)
{
	t_list *node;
	t_list *node_1;

	node = ft_lstnew(42);
	node_1 = ft_lstnew(42);
	if (!node)
		return (1);

	printf("data = %d\n", node->data);
	printf("next = %p\n", (void *)node->next);
	printf("data = %d\n", node_1->data);
	printf("next = %p\n", (void *)node_1->next);

	free(node);
	return (0);
}
