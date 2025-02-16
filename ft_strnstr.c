#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!to_find || (!str))
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j) < len && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main()
{
    const char *haystack = "Hello, world!";
    const char *needle1 = "world";
    const char *needle2 = "Hello";
    const char *needle3 = "!";
    const char *needle4 = "test";
    const char *needle5 = "";

    char *result;

    result = ft_strnstr(haystack, needle1, 13);
    printf("Searching \"%s\" in \"%s\" (len=13): %s\n", needle1, haystack, result ? result : "NULL");

    result = ft_strnstr(haystack, needle2, 4);
    printf("Searching \"%s\" in \"%s\" (len=4): %s\n", needle2, haystack, result ? result : "NULL");

    result = ft_strnstr(haystack, needle3, 13);
    printf("Searching \"%s\" in \"%s\" (len=13): %s\n", needle3, haystack, result ? result : "NULL");

    result = ft_strnstr(haystack, needle4, 13);
    printf("Searching \"%s\" in \"%s\" (len=13): %s\n", needle4, haystack, result ? result : "NULL");

    result = ft_strnstr(haystack, needle5, 13);
    printf("Searching \"%s\" in \"%s\" (len=13): %s\n", needle5, haystack, result ? result : "NULL");

    return 0;
}*/