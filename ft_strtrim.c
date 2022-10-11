/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:56:09 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:35:58 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_trim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		n;

	n = ft_strlen(ft_trim(s1, set));
	str = (char *)malloc(n);
	if (!str)
		return (0);
	ft_strlcpy(str, ft_trim(s1, set), n);
	return (str);
}

char	*ft_trim(char const *s1, char const *set)
{
	char	*strtmp;
	int		i;
	int		n;

	strtmp = (char *)s1;
	n = ft_strlen((char *)s1);
	i = 0;
	while (set[i])
	{
		if (strtmp[n - 1] == set[i])
		{
			strtmp[n - 1] = 0;
			n--;
		}
		if (*strtmp == set[i])
		{
			strtmp++;
			n--;
			i = 0;
		}
		i++;
	}
	return (strtmp);
}
/* Main
#include<stdio.h>
int	main(void)
{
	char	s1[50] = "Hello my name is lulu";
	char	set[10] = "helloa";

	printf("The initial string is: %s\n", s1);
	printf("The chars to trim are: %s\n", set);
	printf("Result : %s\n", ft_strtrim(s1, set));
	free(ft_strtrim(s1, set));
	return (0);
}
*/
