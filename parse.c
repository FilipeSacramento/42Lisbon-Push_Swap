

#include "pushswap.h"

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (isflag(argv) > 0)
	{
		printf("%s || ", argv[1]);
		i++;
	}
	else
		printf("--adaptive || ");
	if (argc < 2 || isnum(argc, argv, i) == 1)
	{
		printf("Error");
		return (1);
	}
	while (i < argc)
	{
		atoi_list(argv[i]);
		i++;
	}
	return (0);
}
