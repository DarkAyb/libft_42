#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (unsigned long int)INT_MAX / 10
			|| (result == (unsigned long int)INT_MAX
				/ 10 && str[i] - '0' > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/*#include <stdio.h>
int main() {
    printf("%d\n", ft_atoi("9"));
    printf("%d\n", ft_atoi("   999"));
    printf("%d\n", ft_atoi("-999"));
    printf("%d\n", ft_atoi("+999"));
    printf("%d\n", ft_atoi("0000999"));
    printf("%d\n", ft_atoi("999abc111"));
    printf("%d\n", ft_atoi("sdfgj999"));
    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", ft_atoi("2147483647"));
    printf("%d\n", ft_atoi("999999999999"));
    printf("%d\n", ft_atoi("-999999999999"));

    return 0;
}*/
