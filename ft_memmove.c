#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	int			j;
	unsigned char	*d;
	const unsigned char	*s;

	i = 0;
	j = 1;

	if ((!dest && !src) || n == 0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
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