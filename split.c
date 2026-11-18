#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int wordcount(char *str, char sep)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (str[i])
    {
        if (str[i] != sep && (i == 0 || str[i - 1] == sep))
            len++;
        i++;
    }
    return (len);
}

char *ft_substr(char *str, int start, int len)
{
    int i;
    int strlen;
    char *ptr;

    if (!str)
        return (NULL);
    strlen = ft_strlen(str);
    if (start >= strlen)
        return (NULL);
    if (len > strlen - start)
        len = strlen - start;
    ptr = malloc(len + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < len && str[i + start])
    {
        ptr[i] = str[i + start];
        i++;
    }
    ptr[i] = 0;
    return (ptr);
}

int makearray(char **array, char *str, char sep)
{
    int i;
    int j;
    int start;

    i = 0;
    j = 0;
    while (str[i])
    {
        while (str[i] == sep)
            i++;
        start = i;
        while (str[i] && str[i] != sep)
			i++;
        if (i > start)
        {
            array[j] = ft_substr(str, start, i - start);
            if (!array)
                return (0);
            j++;
        }
    }
    array[j] = NULL;
    return (1);

}

char **ft_split(char *str, char sep)
{
    char **array;

    if (!str)
        return (NULL);
    array = malloc(sizeof(char *) * wordcount(str, sep) + 1);
    if (!array)
        return (NULL);
    if (!makearray(array, str, sep))
        return (NULL);
    return (array);

}

int main(void)
{
    char *str = "Hello world how are you?";
    char sep= ' ';
    char **array = ft_split(str, sep);
    int i;

    i = 0;
    while (array[i])
    {
        printf("%s\n", array[i]);
        i++;
    }
}