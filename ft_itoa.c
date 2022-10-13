/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:48:53 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/13 12:02:35 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count(long int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int m)
{
	char		*str;
	long int	n;
	int			i;
	int			j;

	j = 0;
	n = m;
	i = ft_count(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		*str = '-';
		n *= -1;
		j = 1;
	}
	while (i--)
	{
		str[i + j] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
/* Main
#include<stdio.h>
int	main(void)
{
	int	n;

	printf("Enter a number:");
	scanf("%d", &n);
	printf("The resulted string is:\n%s\n", ft_itoa(n));
	free(ft_itoa(n));
	return (0);
}
*/
