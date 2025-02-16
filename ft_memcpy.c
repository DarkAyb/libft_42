#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char src[] = "Hello, World!";
	char dest[50];  

	ft_memcpy(dest, src, 13);

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	return 0;
}*/