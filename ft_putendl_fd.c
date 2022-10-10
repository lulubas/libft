/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:13:32 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/10 19:00:26 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
/*
#include<stdio.h>
#include <fcntl.h>
void ft_putendl_fd(char *s, int fd);
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
	ft_putendl_fd(str, fd);
	return (0);
}
*/
void	ft_putendl_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
	write(fd, "\n", 1);
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
