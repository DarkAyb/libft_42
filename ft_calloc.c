#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

/*#include <stdio.h>
int main() {
    size_t nmemb = 5;
    size_t size = sizeof(int);

    int *arr = (int *)ft_calloc(nmemb, size);

    if (arr == NULL)
        return 1;

    printf("Array elements after ft_calloc (0...0):\n");
    size_t i = 0;
    while (i < nmemb) {
        printf("arr[%lu] = %d\n", i, arr[i]);
        i++;
    }

    free(arr);

    return 0;
}*/