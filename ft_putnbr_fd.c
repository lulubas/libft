/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:31:58 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/10 19:01:22 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
/*
#include<stdio.h>
#include <fcntl.h>
void ft_putnbr_fd(int n, int fd);
void ft_putchar_fd(char c, int fd);

int	main(void)
{
 	int fd;
	int n;

	n = 558665;
	fd = open("test", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	printf("fd=%d\n Check content of file 'test'\n", fd);
	if (fd==-1)
		printf("Error open() number=%d\n", fd);
	ft_putnbr_fd(n, fd);
	return (0);
}
*/
void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
		return ;
	}
	else
		ft_putnbr_fd(nb / 10, fd);
	ft_putnbr_fd(nb % 10, fd);
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
