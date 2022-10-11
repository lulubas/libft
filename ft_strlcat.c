/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:59:12 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:36:20 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
/* Main
#include <stdio.h>
int	main(void)
{
	char	src[50] = "hello my name is lulu the bas";
	char	dst[50] = "that is the destination";

	char	src_t[50] = "hello my name is lulu the bas";
	char	dst_t[50] = "that is the destination";
	size_t	n;
	int r;
	int	r_t;

	printf("Enter n :");
	scanf("%zu", &n);
	printf("Source = %s\n", src);
	printf("Destination = %s\n", dst);
	r = ft_strlcat(dst, src, n);
	r_t = strlcat(dst_t, src_t, n);
	printf("New destination = %s\n", dst);
	printf("Return Value = %d\n", r);
	printf("Expected destination = %s\n", dst_t);
	printf("Expected Value = %d\n", r_t);
	return(0);
}
*/
