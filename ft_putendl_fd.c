#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    
    ft_putendl_fd("Hello, world!", fd);

    return 0;
}*/