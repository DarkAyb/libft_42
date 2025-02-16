#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_ptr;

	if (!lst || !f)
		return ;
	list_ptr = lst;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}

/*#include <stdio.h>
void print_content(void *content)
{
    printf("Content: %s\n", (char *)content);
}

int main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    
    node1 = malloc(sizeof(t_list));
    node1->content = "First Node";
    node1->next = NULL;
    
    node2 = malloc(sizeof(t_list));
    node2->content = "Second Node";
    node2->next = NULL;

    node3 = malloc(sizeof(t_list));
    node3->content = "Third Node";
    node3->next = NULL;

    node1->next = node2;
    node2->next = node3;

    ft_lstiter(node1, print_content);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/