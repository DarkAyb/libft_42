#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*#include <stdio.h>

void *double_content(void *content)
{
    int *new_content = (int *)malloc(sizeof(int));
    if (!new_content)
        return NULL;
    *new_content = (*(int *)content) * 2;
    return new_content;
}

void del_content(void *content)
{
    free(content);
}

int main()
{
    t_list *first = ft_lstnew(malloc(sizeof(int)));
    *(int *)first->content = 1;

    t_list *second = ft_lstnew(malloc(sizeof(int)));
    *(int *)second->content = 2;

    t_list *third = ft_lstnew(malloc(sizeof(int)));
    *(int *)third->content = 3;

    first->next = second;
    second->next = third;

    t_list *new_lst = ft_lstmap(first, double_content, del_content);

    t_list *current = new_lst;
    while (current)
    {
        printf("Content: %d\n", *(int *)current->content);
        current = current->next;
    }

    ft_lstclear(&first, del_content);
    ft_lstclear(&new_lst, del_content);

    return 0;
}*/