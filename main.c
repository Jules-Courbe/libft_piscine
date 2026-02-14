#include "utile.h"

int main()
{
	t_token *n1;
	t_token *n2;
	t_token *tmp;
	t_token *head;

	n1 = malloc(sizeof(t_token));
	if (n1 == NULL)
		return (0);
	n1->value = malloc(sizeof(char) * (4 + 1));
	if (n1->value == NULL)
	{
		free(n1);
		return (0);
	}
	n2 = malloc(sizeof(t_token));
	if (n2 == NULL)
		return (0);
	n2->value = malloc(sizeof(char) * (4 + 1));
	if (n2->value == NULL)
	{
		free(n2);
		return (0);
	}

	n1->value[0] = 'A';
	n1->value[1] = 'B';
	n1->value[2] = 'C';
	n1->value[3] = 'D';
	n1->value[4] = '\0';
	n1->entier[0] = 1;
	n1->entier[1] = 2;
	n1->entier[2] = 3;


	n2->value[0] = 'E';
	n2->value[1] = 'F';
	n2->value[2] = 'G';
	n2->value[3] = 'H';
	n2->value[4] = '\0';
	n2->entier[0] = 4;
	n2->entier[1] = 5;
	n2->entier[2] = 6;

	head = n1;
	tmp = head;

	n1->next = n2;
	n2->next = NULL;

	int i = 0;
	int j = 0;

	while (tmp != NULL)
	{
		printf("%s\n", tmp->value);
		while (i < 3)
		{
			printf("%d", tmp->entier[i]);
			i++;
		}
		while (j < 3)
		{
			printf("%d", tmp->entier[j]);
			j++;
		}
		printf("\n");
		tmp = tmp->next;
		i = 0;
		j = 0;
	}

	free_list(head);
	head = NULL;

}