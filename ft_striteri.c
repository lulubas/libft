/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:27:41 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/21 17:56:33 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
/*
#include<stdio.h>
void	*ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_alphatoindex(unsigned int i, char *a);
int		ft_isalpha(unsigned char a);

int	main(void)
{
	char	s[20] = "abc abc";

	printf("Initial string is: %s\n", s);
	ft_striteri(s, ft_alphatoindex);
	printf("Returned string is: %s\n", s);
	free(ft_striteri(s, ft_alphatoindex));
}

void	ft_alphatoindex(unsigned int i, char *a)
{
	if (ft_isalpha(*a))
		*a = i + 48;
}

int	ft_isalpha(unsigned char a)
{
	if ((a < 'A' || a > 'Z') && (a < 'a' || a > 'z'))
		return (0);
	return (1);
}
*/
void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
	return (0);
}
