#include "libft.h"

static int	check_overflow(int num, int digit, int sign)
{
	if (num > (INT_MAX - digit) / 10)
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	return (num * 10 + digit);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = check_overflow(num, str[i] - '0', sign);
		if (num == INT_MAX || num == INT_MIN)
			return (num);
		i++;
	}
	return (num * sign);
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
	printf("%d\n", ft_atoi("-999999999999999"));
    printf("%d\n", ft_atoi("9999999999999999"));

    return 0;
}*/