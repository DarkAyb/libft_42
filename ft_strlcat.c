#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}

/*#include <stdio.h>
int main()
{
	char buffer1[20] = "Hello";
	char buffer2[5] = "Hi";
	const char *src = ", world!";
	
	printf("Before: %s\n", buffer1);
	ft_strlcat(buffer1, src, sizeof(buffer1));
	printf("After: %s\n\n", buffer1);
	
	printf("Before: %s\n", buffer2);
	size_t needed = ft_strlcat(buffer2, src, sizeof(buffer2));
	printf("After: %s\n", buffer2);
	printf("Needed size: %zu\n", needed);

	return 0;
}*/