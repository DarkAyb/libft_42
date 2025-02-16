#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	
	j = 0;
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	
	new[i] = '\0';
	return (new);
}

/*#include <stdio.h>
int main()
{
    char str1[] = "Hello, ";
    char str2[] = "world!";
    
    char *result = ft_strjoin(str1, str2);
    
    if (result)
    {
        printf("Concatenated string: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
}*/