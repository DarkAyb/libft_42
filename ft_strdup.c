#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	if (src == NULL)
	return (NULL);

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
    const char *original = "Hello, world!";
    
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original string: %s\n", original);
        printf("Copied string: %s\n", duplicate);
        
        free(duplicate);
    } else {
        printf("Error creating a copy of a string!\n");
    }

    return 0;
}*/