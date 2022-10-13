/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/13 16:39:07 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<string.h>

int		ft_count(char *s, char c);
char	*ft_assign(char *str, int n);

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*tmp;
	int		i;
	int		n;

	tmp = (char *)s;
	array = (char **)malloc(sizeof(char *) * strlen(tmp));
	if (!array)
		return (0);
	i = 0;
	while (*tmp)
	{
		while (*tmp == c)
			tmp++;
		n = ft_count(tmp, c);
		array[i] = ft_assign(tmp, n);
		tmp += n + 1;
		i++;
	}
	array[i] = NULL;
	return (array);
}

int	ft_count(char *s, char c)
{
	int	n;

	n = 0;
	while (*s && *s != c)
	{
		n++;
		s++;
	}
	return (n);
}

char	*ft_assign(char *str, int n)
{
	char	*word;

	word = (char *)malloc(n);
	if (!word)
		return (0);
	strlcpy(word, str, n + 1);
	return (word);
}
/* Main
#include<stdio.h>
int	main(void)
{
	char	str[100] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char	c;
	int		i;

	i = 0;;	
	c = ' ';
	printf("The initial string is: %s\n", str);
	printf("The delimiter character is: %c\n", c);
	printf("Result (new line delimited):\n");
	while (str[i] != NULL)
	{
		printf("%s\n", ft_split(str, c)[i]);
		i++;
		free(ft_split(str, c));
	}
	return (0);
}
*/
