/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:55:40 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/19 18:10:18 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2);
int	main(void)
{
	char	s1[50] = "coucou je mappelle louis mon ami";
	char	s2[50] = "that is the destination";

	printf("Prefix string = %s\n", s1);
	printf("Suffix string = %s\n", s2);
	printf("New string = %s\n", ft_strjoin(s1, s2));
	return(0);
}
*/
int		ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		n;
	int		n1;
	int		n2;
	int		i;

	i = 0;
	n1 = ft_strlen((char *)s1);
	n2 = ft_strlen((char *)s2);
	n = n1 + n2;
	str = (char *)malloc(sizeof(char) * n + 1);
	ft_strlcpy(str, s1, n1 + 1);
	ft_strlcat(str, s2, n + 1);
	return (str);
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

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (src[j] != 0)
		j++;
	while (*src && i < n - 1)
	{
		*dst = *src;
		i++;
		dst++;
		src++;
	}
	*dst = 0;
	return (j);
}

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	v;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	while (dst[j] != 0)
		j++;
	if (n <= j)
		v = n + i;
	else
		v = i + j;
	while (*src && j < n - 1)
	{
		dst[j] = *src;
		j++;
		src++;
	}
	return (v);
}
