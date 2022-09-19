/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:18:21 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/19 13:24:04 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	src[50] = "coucouu";
	char	dst[50] = "coucouuu";
	size_t	n;

	printf("Enter n :");
	scanf("%zu", &n);
	printf("Source = %s\n", src);
	printf("Destination = %s\n", dst);
	printf("Return Value = %d\n", ft_memcmp(src, dst, n));
	printf("Expected Value = %d\n", memcmp(src, dst, n));
	return(0);
}
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (*a == *b && n > 1)
	{
		a++;
		b++;
		n--;
	}
	return (*a - *b);
}
