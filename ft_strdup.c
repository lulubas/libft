/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:03:21 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/19 13:43:34 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*
#include <stdio.h>
#include <string.h>
char* ft_strdup(const char *str);
int	main(void)
{
	const char	str[50] = "coucou je mappelle louis";

	printf("Expected result : %s\n", strdup(str));
	printf("Returned result : %s\n", ft_strdup(str));

	if (strcmp(strdup(str), ft_strdup(str)) == 0)
		printf("Both strings are the same ! Success !\n");
	free(strdup(str));
	free(ft_strdup(str));
	return(0);
}
*/
int		ft_strlen(const char *str);
void	ft_cpy(const char *str, char *ctr);

char	*ft_strdup(const char *str)
{
	int		n;
	char	*ctr;

	n = ft_strlen(str);
	ctr = (char *)malloc(n * sizeof(char));
	ft_cpy(str, ctr);
	return (ctr);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
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
