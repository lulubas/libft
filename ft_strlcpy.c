/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:09:38 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/07 15:33:53 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n);

int	main(void)
{
	char	src[50] = "coucou je mappelle louis mon ami";
	char	dst[50] = "that is the destination";
	size_t	n;

	printf("Enter n :");
	scanf("%zu", &n);
	printf("Source = %s\n", src);
	printf("Destination = %s\n", dst);
	ft_strlcpy(dst, src, n);
	printf("New destination = %s\n", dst);
	return(0);
}
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] != 0)
		j++;
	while (*dst && i < n - 1)
	{
		*dst = *src;
		i++;
		dst++;
		src++;
	}
	*dst = 0;
	return(j);
}

