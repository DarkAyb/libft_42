#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
int main() {
    size_t	size;
    
	size = 10;
    char *arr = (char *)malloc(size * sizeof(char));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    size_t	i;

	i = 0;
    while (i < size) {
        arr[i] = 'A' + i;
        i++;
    }

    printf("Before:\n");
    i = 0;
    while (i < size) {
        printf("%c ", arr[i]);
        i++;
    }
    printf("\n");

    ft_bzero(arr, size);

    printf("After:\n");
    i = 0;
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);

    return 0;
}*/