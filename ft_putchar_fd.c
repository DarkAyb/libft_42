#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>
#include <stdio.h> 

int main() 
{
    int	fd;
	
	fd = open("file.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        return 1;
    }
    write(fd, "Hello, world!", 13);
    close(fd);
    return 0;
}*/