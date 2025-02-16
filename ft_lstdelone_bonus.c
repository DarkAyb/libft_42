#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return;
	if (del)
		(*del)(lst->content);
	free(lst);
}

/*#include <stdio.h>

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *node1;
    
    node1 = malloc(sizeof(t_list));
    node1->content = malloc(10);
    node1->next = NULL;

    ft_lstdelone(node1, del);

    printf("Node deleted.\n");

    return 0;
}*/