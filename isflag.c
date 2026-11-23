

#include "pushswap.h"

static int  ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
    if (!s1 || !s2)
        return (1);
	while (s1[i] != '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

int isflag(char **argv)
{
    if (ft_strcmp(argv[1], "--complex") == 0)
        return (3);
    if (ft_strcmp(argv[1], "--medium") == 0)
        return (2);
    if (ft_strcmp(argv[1], "--simple") == 0)
        return (1);
    return (0);
}
