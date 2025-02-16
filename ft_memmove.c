#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*data_dest;
	char	*data_src;
	char	*original_dest;

	if (!src || !dest)
		return (NULL);
	original_dest = dest;
	if (src > dest)
	{
		dest = ft_memcpy(dest, src, n);
	}
	else
	{
		data_dest = (char *)dest;
		data_src = (char *)src;
		while (n--)
			data_dest[n] = data_src[n];
	}
	return (original_dest);
}

/*#include <stdio.h>

int main()
{
    char src[] = "Hello, World!";
    char dest[50];

    ft_memmove(dest, src, 13);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

	ft_memmove(src + 7, src, 6);
    printf("After overlapping copy:\n");
    printf("Source after move: %s\n", src);

    return 0;
}*/