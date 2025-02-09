#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/*#include <stdio.h>

int main()
{
    t_list *list = NULL;

    t_list *first_node = (t_list *)malloc(sizeof(t_list));
    if (first_node == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    first_node->content = 42;
    first_node->next = NULL;

    ft_lstadd_back(&list, first_node);

    t_list *second_node = (t_list *)malloc(sizeof(t_list));
    if (second_node == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    second_node->content = 84;
    second_node->next = NULL;

    ft_lstadd_back(&list, second_node);

    t_list *current = list;
    while (current != NULL)
    {
        printf("Node content: %d\n", current->content);
        current = current->next;
    }

    // Освобождаем память
    free(first_node);
    free(second_node);

    return 0;
}*/