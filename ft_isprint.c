#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main() {
    int test_values[] = {31, 32, 65, 122, 126, 127};  // Тестируем символы на границе печатных символов
    size_t i = 0;

    // Проверяем каждое значение из массива test_values
    while (i < sizeof(test_values) / sizeof(test_values[0])) {
        if (ft_isprint(test_values[i])) {
            printf("%d is a printable character.\n", test_values[i]);
        } else {
            printf("%d is not a printable character.\n", test_values[i]);
        }
        i++;
    }

    return 0;
}*/