/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:03:21 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 17:35:50 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_cpy(const char *str, char *ctr);

char	*ft_strdup(const char *str)
{
	int		n;
	char	*ctr;

	n = ft_strlen((char *)str);
	ctr = (char *)malloc(n * sizeof(char));
	ft_cpy(str, ctr);
	return (ctr);
}

void	ft_cpy(const char *str, char *ctr)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ctr[i] = str[i];
		i++;
	}
}
/* Main
#include <stdio.h>
int	main(void)
{
	const char	str[50] = "Hello my name is lulu";

	printf("Expected result : %s\n", strdup(str));
	printf("Returned result : %s\n", ft_strdup(str));

	if (strcmp(strdup(str), ft_strdup(str)) == 0)
		printf("Both strings are the same ! Success !\n");
	free(strdup(str));
	free(ft_strdup(str));
	return(0);
}
*/
