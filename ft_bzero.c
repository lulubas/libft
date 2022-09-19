/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:07:35 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/19 12:05:43 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
void	ft_bzero(void *str, size_t n);
int	main(void)
{
	char	str[50] = "coucou je mappelle louis mon ami";
	size_t	n;

	printf("Enter n :");
	scanf("%zu", &n);
	printf("String = %s\n", str);
	ft_bzero(str, n);
	printf("String = %c\n", *(str+8));
	return(0);
}
*/
void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ctr;

	ctr = (unsigned char *) str;
	while (n > 0)
	{
		*ctr = 0;
		ctr++;
		n--;
	}
}
