#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{	
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}

/*#include <stdio.h>

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = NULL;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    
    node1 = malloc(sizeof(t_list));
    node1->content = malloc(10);
    node1->next = NULL;
    
    node2 = malloc(sizeof(t_list));
    node2->content = malloc(20);
    node2->next = NULL;

    node3 = malloc(sizeof(t_list));
    node3->content = malloc(30);
    node3->next = NULL;

    node1->next = node2;
    node2->next = node3;
    
    list = node1;

    ft_lstclear(&list, del);

    if (list == NULL)
        printf("List successfully cleared.\n");
    else
        printf("List is not cleared.\n");

    return (0);
}*/