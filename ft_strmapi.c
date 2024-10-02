#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *new;

    new = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!new)
        return (NULL);
    i = 0;
    while(s[i])
    {
        new[i] = f(i, s[i]);
        i++;
    }
    return (new);
}