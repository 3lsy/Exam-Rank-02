#include <stdlib.h>
#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size);

void print_tab(int *tab, unsigned int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
}

int main(int ac, char **av)
{
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 100000);
	for (int i = 1; i < ac; i++)
		tab[i - 1] = atoi(av[i]);
	sort_int_tab(tab, ac - 1);
	print_tab(tab, ac - 1);
	return (0);
}