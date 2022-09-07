/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:01:41 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/07 17:38:19 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_toupper(int c);
int	main(void)
{
	int c;
	char i;

	printf("Enter an integer :");
	scanf("%d", &c);
	printf("Your char is = %c\n", c);
	i = ft_toupper(c);
	printf("End Char = %c\n", i);
}
*/
int	ft_toupper(int c)
{
	if (c > 96 && c < 122)
		c -= 32;
	return(c);
}
