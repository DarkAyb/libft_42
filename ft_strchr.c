#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*#include <stdio.h>

int main() {
    char str[] = "Hello, world!";
    char c = 'o';

    char *result = ft_strchr(str, c);
    if (result) {
        printf("Found character '%c' in line: %s\n", c, result);
    } else {
        printf("Сharacter '%c' not found in string.\n", c);
    }

    c = 'z';
    result = ft_strchr(str, c);
    if (result) {
        printf("Found character '%c' in line: %s\n", c, result);
    } else {
        printf("Сharacter '%c' not found in string.\n", c);
    }

    c = '\0';
    result = ft_strchr(str, c);
    if (result) {
        printf("End of line character found (NULL): %s\n", result);
    }

    return 0;
}*/