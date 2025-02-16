#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}

/*#include <stdio.h>

int main()
{
    const char *str = "Hello, World!";
    char *substr = ft_substr(str, 7, 5);

    if (substr)
    {
        printf("Substr: %s\n", substr);  // Выведет "World"
        free(substr);  // Не забывайте освобождать память
    }
    return 0;
}*/