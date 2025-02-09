#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
int main(void)
{
	t_list *first = (t_list *)malloc(sizeof(t_list));
	t_list *second = (t_list *)malloc(sizeof(t_list));
	t_list *third = (t_list *)malloc(sizeof(t_list));

	if (!first || !second || !third)
		return (1);
		
	first->content = 42;
	first->next = second;

	second->content = 84;
	second->next = third;

	third->content = 168;
	third->next = NULL;

	t_list *last = ft_lstlast(first);
	if (last)
		printf("Last element: %d\n", last->content);

	free(first);
	free(second);
	free(third);

	return (0);
}*/