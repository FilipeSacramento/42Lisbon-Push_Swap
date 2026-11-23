

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdarg.h>

typedef struct s_numlist
{
    int number;
    struct s_numlist *next;
}   t_numlist;

int isnum(int argc, char **argv, int i);
int isrepeat(int argc, char **argv);
int isflag(char **argv);
void print_nbrs(char *str);
void atoi_list(char *str);

#endif