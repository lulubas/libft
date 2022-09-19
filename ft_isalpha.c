/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:17:09 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/16 17:27:44 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(unsigned char a)
{	
	if ((a < 'A' || a > 'Z') && (a < 'a' || a > 'z'))
		return (0);
	return (1);
}
