#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (NULL);
}

/*#include <stdio.h>
//#include <stddef.h>
int main() {
    char arr[] = "Hello, World!";
    char target = 'o';

    char *result = (char *)ft_memchr(arr, (int)target, strlen(arr));

    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", target, result - arr);
    } else {
        printf("Character not found\n");
    }

    return 0;
}*/