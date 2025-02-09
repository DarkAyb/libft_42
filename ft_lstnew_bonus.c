#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*#include <stdio.h>
int main(void)
{

    t_list *node = ft_lstnew("Hello, world!");
    
    if (node)
    {
        printf("Content: %s\n", (char *)node->content);

        free(node);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/