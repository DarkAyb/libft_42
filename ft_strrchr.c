#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
    const char str[] = "Hello, world!";
    int ch = 'o';
    
    char *result = ft_strrchr(str, ch);
    
    if (result)
        printf("Last occurrence of '%c': %s\n", ch, result);
    else
        printf("Character '%c' not found.\n", ch);

    return 0;
}*/