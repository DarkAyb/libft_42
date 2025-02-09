#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main() {
    char test_chars[] = {'A', 'z', '5', '@', '1', 'B', '!'};
    size_t	i;
	
	i = 0;
	while (i < sizeof(test_chars) / sizeof(test_chars[0])) {
        if (ft_isalnum(test_chars[i])) {
            printf("'%c' is alphanumeric.\n", test_chars[i]);
        } else {
            printf("'%c' is not alphanumeric.\n", test_chars[i]);
        }
        i++;
    }

    return 0;
}*/