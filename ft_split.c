/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 14:55:20 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count(char *s, char c);
char	*ft_assign(char *str, int n);

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*tmp;
	int		i;
	int		n;

	tmp = (char *)s;
	array = (char **)malloc(sizeof(char *) * ft_strlen(tmp));
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
	ft_strlcpy(word, str, n + 1);
	return (word);
}
/* Main
#include<stdio.h>
int	main(void)
{
	char	str[50] = "hello?my?name??is???louis";
	char	c;
	int		i;
	
	c = 63;
	printf("The initial string is: %s\n", str);
	printf("The delimiter character is: %c\n", c);
	printf("Result (new line delimited):\n");
	for (i = 0; i < 4; i++){
		printf("%s\n", ft_split(str, c)[i]);
	}
	return (0);
}
*/
