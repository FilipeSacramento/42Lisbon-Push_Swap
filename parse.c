#include <stdio.h>
#include <unistd.h>

int isnum(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            if (!(argv[i][j] > '0' && argv[i][j] < '9'))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		++i;
	}
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

int main(int argc, char **argv)
{
    if (argc < 2 || !*argv || isnum(argc, argv) == 1 || isrepeat(argc, argv) == 1)
    {
        write (1, "Error", 5);
        return (1);
    }
    write (1, "Correct", 7);
    return (0);
}