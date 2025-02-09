#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main() {
    char test_chars[] = {'A', 'z', '5', '@', '1', 'B', '!'};
    size_t i = 0;
    
    while (i < sizeof(test_chars) / sizeof(test_chars[0])) {
        if (ft_isalpha(test_chars[i])) {
            printf("'%c' is alphabetic.\n", test_chars[i]);
        } else {
            printf("'%c' is not alphabetic.\n", test_chars[i]);
        }
        i++;
    }

    return 0;
}*/