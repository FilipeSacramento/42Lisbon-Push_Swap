#include "unistd.h"

void printnc(char c, int n)
{
    while (n > 0)
    {
        write(1, &c, 1);
        n--;
    }
}

void print_line(int space, int ful)
{
    printnc(' ',space);
    printnc('x',ful - space);
    printnc(' ',1);
    printnc('x',ful - space);
    printnc(' ',space);
    printnc('\n',1);
}

void print_triangle(int nbr)
{
    int x = nbr;
    int y = 0;
    while (y < nbr)
    {
        while(x > 0)
        {
            print_line(x - 1,nbr);
            x--;
        }
        y++;
    }
}

int main (void)
{
    print_triangle(65);
}