/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:03:21 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/14 17:24:48 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_cpy(const char *str, char *ctr);

char	*ft_strdup(const char *str)
{
	size_t	n;
	char	*ctr;

	n = ft_strlen(str);
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
	ctr[i] = 0;
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
