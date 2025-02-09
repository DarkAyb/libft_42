#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int main()
{
    t_list *list = NULL;

    t_list *new_node1 = (t_list *)malloc(sizeof(t_list));
    if (!new_node1)
        return 1;
    new_node1->content = 42;
    new_node1->next = NULL;

    t_list *new_node2 = (t_list *)malloc(sizeof(t_list));
    if (!new_node2)
    {
        free(new_node1);
        return 1;
    }
    new_node2->content = 43;
    new_node2->next = NULL;

    t_list *new_node3 = (t_list *)malloc(sizeof(t_list));
    if (!new_node3)
    {
        free(new_node1);
        free(new_node2);
        return 1;
    }
    new_node3->content = 44;
    new_node3->next = NULL;

    // Добавляем узлы в начало списка
    ft_lstadd_front(&list, new_node1);
    ft_lstadd_front(&list, new_node2);
    ft_lstadd_front(&list, new_node3);

    t_list *current = list;
    while (current)
    {
        printf("Node content: %d\n", current->content);
        current = current->next;
    }

    t_list *temp;
    while (list)
    {
        temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}*/