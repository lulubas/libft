/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:56:04 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/10 19:00:57 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
/*
#include<stdio.h>
#include <fcntl.h>
void ft_putstr_fd(char *s, int fd);
int	ft_strlen(char *str);

int	main(void)
{
 	int fd;
	char *str;

	str = "Coucou";
	fd = open("test", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	printf("fd=%d\n Check content of file 'test'\n", fd);
	if (fd==-1)
		printf("Error open() number=%d\n", fd);
	ft_putstr_fd(str, fd);
	return (0);
}
*/
void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
