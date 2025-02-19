#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void    to_uppercase(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c);
}

int main()
{
	char str[] = "hello, world!";
	
	printf("Before: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("After: %s\n", str);

	return 0;
}*/