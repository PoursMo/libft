#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t slen;

    if(!s)
        return (NULL);
    slen = ft_strlen(s);
    if(start >= slen)
        return (ft_strdup(""));
    if(len > slen - start)
        len = slen - start;
    substr = malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    i = 0;
    while(s[start] && i < len)
    {
        substr[i] = s[start];
        i++;
        start++;
    }
    substr[i] = '\0';
    return (substr);
}