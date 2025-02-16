#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;

	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-12345, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}

	ft_putnbr_fd(98765, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-6789, fd);
	write(fd, "\n", 1);

	close(fd);

	return 0;
}*/