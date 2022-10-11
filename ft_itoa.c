/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:48:53 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:36:09 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	ft_modulo(int n);
int		ft_decimals(int n);
int		ft_createtmp(char *tmp, int n);

char	*ft_itoa(int n)
{
	char	*str;
	char	*tmp;
	int		i;
	int		j;

	str = (char *)malloc(ft_decimals(n) + 1);
	tmp = (char *)malloc(ft_decimals(n) + 1);
	if (!str || !tmp)
		return (0);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n = -n;
		i++;
	}
	j = ft_createtmp(tmp, n);
	while (j--)
	{
		str[i] = tmp[j];
		i++;
	}
	return (str);
}

int	ft_createtmp(char *tmp, int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		tmp[i] = ft_modulo(n);
		n /= 10;
		i++;
	}
	return (i);
}

char	ft_modulo(int n)
{
	char	a;

	a = (n % 10) + 48;
	return (a);
}

int	ft_decimals(int n)
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
