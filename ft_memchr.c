/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:25:32 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:37:44 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*s;

	a = c;
	s = (unsigned char *)str;
	while (*s && *s != a && n > 1)
	{
		s++;
		n--;
	}
	if (*s != a)
		return (0);
	return ((void *)s);
}
/* Main
#include <stdio.h>
int	main(void)
{
	char	str[50] = "This is a test string to try";
	char	str_t[50] = "This is a test string to try";
	int	c;
	char	t;
	size_t	n;

	printf("The initial string is = %s\n", str);
	printf("Enter a char :");
	scanf(" %c", &t);
	printf("Enter n :");
	scanf("%zu", &n);
	c = t;
	printf("Your char int equivalent is = %d\n", c);
	printf("The end result is = %s\n", ft_memchr(str, c, n));
	printf("The expected result is = %s\n", memchr(str_t, c, n));
	return(0);
}
*/
