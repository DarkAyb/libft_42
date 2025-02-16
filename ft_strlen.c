#include "libft.h"

size_t ft_strlen(const char *str)
{
    const char *s;
	
	if (!str)
        return 0;
	s = str;
	while (*s)
		s++;
	return s - str;
}

/*#include <stdio.h>

int main()
{
    const char *str = "Hello, world!";
    size_t len = ft_strlen(str);
    printf("Length of the string: %zu\n", len);
    return 0;
}*/