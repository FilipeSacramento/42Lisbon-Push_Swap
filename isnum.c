

#include "pushswap.h"

int isnum(int argc, char **argv, int i)
{
    int	j;

    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            if ((argv[i][j] == '-' || argv[i][j] == '+')
                    && (argv[i][j + 1] > '0' && argv[i][j + 1] < '9')
					&& (argv[i][j - 1] == ' ' || j == 0))
                j++;
            if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == ' '))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}
