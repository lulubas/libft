/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:48:53 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/13 00:49:19 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	ft_modulo(long int n);
int		ft_decimals(long int n);
int		ft_createtmp(char *tmp, long int n);
int		ft_check(char *str, int n, long int i);

char	*ft_itoa(int m)
{
	char		*str;
	char		*tmp;
	int			i;
	int			j;
	long int	n;

	i = 0;
	n = m;
	str = (char *)malloc(ft_decimals(n) + 1);
	tmp = (char *)malloc(ft_decimals(n) + 1);
	if (!str || !tmp)
		return (0);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n *= -1;
	}
	j = ft_createtmp(tmp, n);
	while (j--)
	{
		str[i] = tmp[j];
		i++;
	}
	return (str);
}

int	ft_createtmp(char *tmp, long int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		tmp[i] = '0';
		return (1);
	}
	while (n > 0)
	{
		tmp[i] = ft_modulo(n);
		n /= 10;
		i++;
	}
	return (i);
}

char	ft_modulo(long int n)
{
	char	a;

	a = (n % 10) + 48;
	return (a);
}

int	ft_decimals(long int n)
{
	int	d;

	d = 0;
	while (n > 0)
	{
		d++;
		n /= 10;
	}
	return (d);
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
