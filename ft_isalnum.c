/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:18:14 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/19 11:54:02 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(unsigned char a)
{
	if ((a < 'A' || a > 'Z') && (a < 'a' || a > 'z') && (a < '0' || a > '9'))
		return (0);
	return (1);
}
