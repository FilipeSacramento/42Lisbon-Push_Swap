#include <stdio.h>

int ft_isdigit(char c)
{
	return(c > 47 && c < 58);
}

long	ft_atoi(const char *nptr)
{
	int	i;
	long	nbr;
	int	neg;

	i = 0;
	nbr = 0;
	neg = 1;
	if (nptr[i] == '-')
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

void print_nbrs(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (ft_isdigit(str[i]) && (!ft_isdigit(str[i - 1]) || !i))
			printf("%ld|", ft_atoi(str + i));
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc)
		print_nbrs(argv[i++]);
	return(0);
}

