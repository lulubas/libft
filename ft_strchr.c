/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:52:35 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/07 19:51:29 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
char*	ft_strchr(const char *str, int c);

int	main(void)
{
	char	str[50] = "This is a test string to try";
	int	c;
	char t;

	printf("Enter a char :");
	scanf(" %c", &t);
	c = t;
	printf("Your char int equivalent is = %d\n", c);
	printf("The initial string was = %s\n", str);
	printf("The end result is = %s\n", ft_strchr(str, c));
	return(0);
}
*/
char*	ft_strchr(const char *str, int c)
{
	char a;
	
	a = c;
	while (*str && *str != a)
		str++;
	return((char *)str);	
}
