#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

#include <stdio.h>
int main()
{
    char c = 'a';
    printf("Original: %c, Uppercase: %c\n", c, ft_toupper(c)); 
   
	c = 'z';
    printf("Original: %c, Uppercase: %c\n", c, ft_toupper(c)); 
    
	c = 'A';
    printf("Original: %c, Uppercase: %c\n", c, ft_toupper(c)); 
   
	c = '1';
    printf("Original: %c, Uppercase: %c\n", c, ft_toupper(c));  

    return 0;
}