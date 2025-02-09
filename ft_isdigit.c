#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main() {
    int test_values[] = {48, 57, 60, 65, 100, 122};
    size_t i = 0;

    while (i < sizeof(test_values) / sizeof(test_values[0])) {
        if (ft_isdigit(test_values[i])) {
            printf("%d is a digit.\n", test_values[i]);
        } else {
            printf("%d is not a digit.\n", test_values[i]);
        }
        i++;
    }

    return 0;
}*/