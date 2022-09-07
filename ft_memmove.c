/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:35:53 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/06 16:59:51 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void*	ft_memmove(void *dst, const void *src, size_t n);

int	main(void)
{
	char	src[50] = "coucou je mappelle louis mon ami";
	char	dst[50] = "that is the destination";
	size_t	n;

	printf("Enter n :");
	scanf("%zu", &n);
	printf("Source = %s\n", src);
	printf("Destination = %s\n", dst);
	ft_memmove(dst, src, n);
	printf("New destination = %s\n", dst);
	return(0);
}
*/
void*	ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	char	tmp[n];
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < n)
	{
		tmp[i] = *s;
		s++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*d = tmp[i];
		d++;
		i++;
	}
	return(dst);
}
