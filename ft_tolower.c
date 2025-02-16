#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

#include <stdio.h>

int main()
{
    char c = 'A';
    printf("Original: %c, Lowercase: %c\n", c, ft_tolower(c));

    c = 'b';
    printf("Original: %c, Lowercase: %c\n", c, ft_tolower(c));

	c = '1';
    printf("Original: %c, Lowercase: %c\n", c, ft_tolower(c));

    return 0;
}