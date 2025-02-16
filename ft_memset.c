#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>

int main()
{
    char str[20] = "Hello, World!";
    
    printf("Before memset: %s\n", str);

    ft_memset(str, 'A', 10);

    printf("After memset: %s\n", str);

    return 0;
}*/