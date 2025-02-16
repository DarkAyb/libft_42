#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0')) 
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main() {
    char s1[] = "Hello";
    char s2[] = "Helao";
    int result = ft_strncmp(s1, s2, 4);
    
    printf("Result: %d\n", result);  // Должно вернуть 0 (первые 4 символа одинаковы)
    
    result = ft_strncmp(s1, s2, 5);
    printf("Result: %d\n", result);  // Должно вернуть отрицательное значение (пятый символ отличается)
    
    return 0;
}*/