#include <stdlib.h>
#define IS_SPACE(x) (x == ' ' || x == '\t' || x == '\n')

int	skip_separation(char *str, int i)
{
	while (str[i] && IS_SPACE(str[i]))
		i++;
	return (i);
}

char	**ft_split(char *str)
{
	char	**spl = malloc(sizeof(char *) * 100000);
	int		i = 0;
	int		x = 0;
	while (str[i])
	{
		if (!IS_SPACE(str[i]))
		{
			spl[x] = malloc(sizeof(char) * 100000);
			int i_word = 0;
			while (str[i] && !IS_SPACE(str[i]))
				spl[x][i_word++] = str[i++];
			spl[x++][i_word] = 0;
		}
		else
			i = skip_separation(str, i);
	}
	spl[x] = NULL;
	return (spl);
}
