#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

void add_node(t_list **head, char *str)
{
	t_list	*tmp;
	if (!*head)
	{
		*head = (t_list *)malloc(sizeof(t_list));
		(*head)->next = NULL;
		(*head)->data = str;
		return ;
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (t_list *)malloc(sizeof(t_list));
	tmp->next->next = NULL;
	tmp->next->data = str;
}

int	main(void)
{
	t_list	*head;

	head = NULL;
	add_node(&head, "1st_one");
	add_node(&head, "2nd_one");
	add_node(&head, "3rd_one");
	add_node(&head, "4th_one");
	ft_list_remove_if(&head, "3rd_one", &strcmp);
	while (head)
	{
		printf("%s ", (char *)head->data);
		head = head->next;
	}
	return (0);
}