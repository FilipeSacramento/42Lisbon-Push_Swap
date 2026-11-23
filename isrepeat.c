

#include "pushswap.h"

static int  ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}


int isrepeat(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) == 0)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}