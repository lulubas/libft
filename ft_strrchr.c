/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:19:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/10 19:02:55 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
char*	ft_strrchr(const char *str, int c);
int	ft_strlen(const char *str);
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
char	*ft_strrchr(const char *str, int c)
{
	char	a;
	int		i;
	int		j;

	i = ft_strlen(str);
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

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
