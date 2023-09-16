#include <stdlib.h>
#include <stdio.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

void	add_int(int i, t_list **head)
{
	t_list *tmp;

	if (!*head)
	{
		*head = (t_list *)malloc(sizeof(t_list));
		(*head)->data = i;
		(*head)->next = NULL;
		return ;
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (t_list *)malloc(sizeof(t_list));
	tmp->next->data = i;
	tmp->next->next = NULL;
}

void	put_list(t_list *head)
{
	while (head)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int ascending(int a, int b)
{
	return (a <= b);
}

int	main(int ac, char **av)
{
	t_list	*head;

	head = NULL;
	for (int i = 1; i < ac; i++)
		add_int(atoi(av[i]), &head);
	head = sort_list(head, &ascending);
	put_list(head);
	return (0);
}