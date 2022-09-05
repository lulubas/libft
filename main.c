/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:21:14 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/05 16:18:02 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_strlen (char *str);

int	main (void)
{
	char	str[10]="ff";
	int 	t;

	t = ft_strlen(str);
	printf("Result = %d", t);
	return (0);
}
