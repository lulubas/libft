/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:38:55 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/06 16:14:04 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void*	ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char	src[50] = "coucou je mappelle louis mon ami";
	char	dst[50] = "that is the destination";
	size_t	n;

	printf("Enter n :");
	scanf("%zu", &n);
	printf("Source = %s\n", src);
	printf("Destination = %s\n", dst);
	ft_memcpy(dst, src, n);
	printf("New destination = %s\n", dst);
	return(0);
}

void*	ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	
	s = (char *)src;
	d = (char *)dst;

	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return(dst);
}
