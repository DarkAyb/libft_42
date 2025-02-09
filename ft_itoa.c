#include "libft.h"

static char	*ft_char(char *s, unsigned int number, int len)
{
	while (number > 0)
	{
		len--;
		s[len] = '0' + (number % 10);
		number = number / 10;
	}
	return (s);
}

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				len;
	unsigned int	number;

	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len] = '\0';
	if (n == 0)
		s[0] = '0';
	else
	{
		if (n < 0)
		{
			s[0] = '-';
			len--;
			if (n == INT_MIN)
				number = 2147483648U;//INT_MIN like unsigned
			else		
				number = (unsigned int)(-n);
		}
		else
			number = (unsigned int)n;
		ft_char(s, number, len);
	}
	return (s);
}

/*#include <stdio.h>
int main(void)
{
	int n = 2147483648;  
	char *str = ft_itoa(n);

	if (str != NULL)
	{
		printf("Integer: %d\n", n);
		printf("String: %s\n", str);
		free(str);  // Освобождаем память
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}*/