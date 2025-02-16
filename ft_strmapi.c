#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>

char to_uppercase(unsigned int i, char c)
{
    (void)i;
    return ft_toupper(c);
}

int main()
{
    const char *str = "hello, world!";
    
    char *result = ft_strmapi(str, to_uppercase);
    
    if (result)
    {
        printf("Original string: %s\n", str);
        printf("Modified string: %s\n", result);
        free(result);
    }

    return 0;
}*/