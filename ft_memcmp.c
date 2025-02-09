#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while ((*ptr1 == *ptr2) && n > 1)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return ((int)(*ptr1 - *ptr2));
}

#include <stdio.h>
#include <string.h>

int main() {
    char arr1[] = "Hello, World!";
    char arr2[] = "Hello, friend!";

    int result = memcmp(arr1, arr2, 8); 

    if (result == 0)
        printf("Первые 8 символов одинаковы\n");
    else
        printf("Первые 8 символов различны\n");

    return 0;
}