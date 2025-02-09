#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main() {
    int test_values[] = {65, 127, 128, -1, 50, 200};
    size_t i = 0;

    while (i < sizeof(test_values) / sizeof(test_values[0])) {
        if (ft_isascii(test_values[i])) {
            printf("%d is ASCII.\n", test_values[i]);
        } else {
            printf("%d is not ASCII.\n", test_values[i]);
        }
        i++;
    }

    return 0;
}*/