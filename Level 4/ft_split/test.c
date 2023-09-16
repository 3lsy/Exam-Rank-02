#include <stdio.h>

char	**ft_split(char *str);

void	print_split(char **spl)
{
	int	i;

	i = 0;
	while (spl[i])
	{
		printf("[%s] ", spl[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
		print_split(ft_split(av[i]));
	return (0);
}
