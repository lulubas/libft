/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:49:58 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/19 12:02:40 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
void*	ft_memset(void *str, int c, size_t n);

int	main(void)
{
	char	str[50] = "coucou je mappelle louis mon ami";
	int		c;
	size_t	n;
	
	c = 45;
	
	printf("Enter n :");
	scanf("%zu", &n);
	printf("String = %s\n", str);
	ft_memset(str, c, n);
	printf("String = %s\n", str);
	return(0);
}
*/
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ctr;

	ctr = (unsigned char *)str;
	while (n > 0)
	{
		*ctr = c;
		ctr++;
		n--;
	}
	return (str);
}
