#include <stdio.h>
#include <stdlib.h>
#define ABS(X) (((X) < 0) ? (-X) : (X))

static int	ft_intlen(long nb)
{
	int	i = 0;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long 	nb = nbr;
	int		len = ft_intlen(nb);
	int		sign = 0;
	if (nb < 0)
		sign = 1;
	char	*str = (char *)malloc(sizeof(char) * (len + sign + 1));
	int i = len + sign;
	while (i > 0)
	{
		str[--i] = (char)(ABS(nb % 10) + '0');
		nb /= 10;
	}
	if (sign)
		str[0] = '-';
	str[len + sign] = 0;
	return (str);
}
