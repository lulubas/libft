/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/20 18:15:20 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
char	**ft_split(char	const *s, char c);

int	main(void)
{
	char	str[50] = "salut:je:mappelle:louis";
	char	c;
	int		i;
	
	c = 58;
	printf("The initial string is: %s\n", str);
	printf("The delimiter character is: %c\n", c);
	printf("Result :\n");
	for (i = 0; i < 4; i++){
		printf("%s\n", ft_split(str, c)[i]);
	}
	return (0);
}

int	ft_count(char const *s, char c);

char **ft_split(char const *s, char c)
{
	char	**array;
	char	*tmp;
	int		i;
	int		n;
	
	array = (char **)malloc(800);
	tmp = (char *)s;
	i = 0;
	while (*tmp)
	{
		n = ft_count(tmp, c);
		array[i]=(char *)malloc(n);
		strlcpy(array[i], s, n);
		tmp += n + 1;
		i++;
	}
	return (array);
}

int	ft_count(char const *s, char c)
{
	int	n;

	n = 0;
	while(*s && *s != c)
	{
		n++;
	}
	return (n);
}
