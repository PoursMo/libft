#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *ptr;

    new = ft_lstnew(f(lst->content));
    if(!new)
        return (NULL);
    lst = lst->next;
    ptr = new;
    while (lst)
	{
		new->next = ft_lstnew(f(lst->content));
        if(!new->next)
        {
            ft_lstclear(&ptr, del);
            return (NULL);
        }
        new = new->next;
		lst = lst->next;
	}
    new->next = NULL;
    return (ptr);
}
