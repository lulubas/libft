/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:17:28 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/05 15:46:31 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(unsigned char a)
{
	if (a < '1' || a > '9')
		return(0);
	return (1);
}
