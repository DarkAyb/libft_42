#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*#include <stdio.h>
int main()
{
    char dest[6];
    const char *src = "Hello, world!";
    
    size_t copied = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied string: '%s'\n", dest);
    printf("Length of source string: %zu\n", copied);

    return 0;
}*/