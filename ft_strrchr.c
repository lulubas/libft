/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:19:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:46:18 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	a;
	int		i;
	int		j;

	i = ft_strlen((char *)str);
	a = c;
	j = 0;
	while (j < i)
	{
		str++;
		j++;
	}
	while (i > 0 && *str != a)
	{
		str--;
		i--;
	}
	if (i == 0)
		return (0);
	return ((char *)str);
}
/* Main
#include <stdio.h>
int	main(void)
{
	char	str[50] = "This is a test string to try";
	char	str_t[50] = "This is a test string to try";
	int	c;
	char t;

	printf("The initial string is = %s\n", str);
	printf("Enter a char :");
	scanf(" %c", &t);
	c = t;
	printf("Your char int equivalent is = %d\n", c);
	printf("The end result is = %s\n", ft_strrchr(str, c));
	printf("The expected result is = %s\n", strrchr(str_t, c));
	return(0);
}
*/
