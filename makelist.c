

#include "pushswap.h"

t_numlist *makelist(int num)
{
    t_numlist   *nlist;

    nlist = malloc(sizeof(t_numlist));
    if (!nlist)
        return (NULL);
    nlist->number = num;
    nlist->next = NULL;
}

void    listadd(t_numlist **makelist, int num)
{
    int i;

    i = 1;
    if (isflag(argv) != 0)
        i++;
}