#include "pushswap.h"

static int ft_isdigit(char c)
{
    if ((c >= '0' && c <= '9') || c == '-' || c == '+')
        return(1); 
	return(0);
}

static long ft_atoi(const char *nptr)
{
	int     i;
	long	nbr;
	int     neg;

	i = 0;
	nbr = 0;
	neg = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return (nbr * neg);
}

#include <stdio.h>

void atoi_list(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (ft_isdigit(str[i]) && (!ft_isdigit(str[i - 1]) || i == 0))
			printf("%ld|", ft_atoi(str + i));
		i++;
	}
}

// int main(int argc, char **argv)
// {
// 	int i = 1;

// 	while (i < argc)
// 		add_nbrs(argv[i++]);
// 	return(0);
// }

