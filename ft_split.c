/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/14 17:35:46 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<string.h>
#include<stdio.h>

size_t	ft_countwords(const	char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;
	size_t	check_i;

	len = ft_strlen(s);
	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && i < len)
			i++;
		check_i = i;
		while (s[i] != c && i < len)
			i++;
		if (i > check_i)
			count++;
		i++;
	}
	return (count);
}

char	*ft_create_word(char const *s, int i, char c)
{
	char	*word;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	k = i;
	while (s[k++] != c && s[k++])
		j++;
	word = (char *)malloc(sizeof(char) * (j + 1));
	j = 0;
	while (s[i] != c && s[i])
		word[j++] = s[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word_count;
	size_t	word_index;
	size_t	i;

	i = 0;
	word_index = 0;
	word_count = ft_countwords(s, c);
	if (word_count == 0)
		return (0);
	array = (char **)malloc(sizeof(char *) * word_count);
	if (!array)
		return (0);
	while (s[i] != 0)
	{
		while (s[i] == c && s[i])
			i++;
		array[word_index] = ft_create_word(s, i, c);
		i += ft_strlen(ft_create_word(s, i, c));
		word_index++;
	}
	return (array);
}
/* Main
#include<stdio.h>
int	main(void)
{
	char	str[100] = ";;;;;;;";
	char	c;
	size_t	i;
	size_t	word_count;

	i = 0;
	c = ';';
	word_count = ft_countwords(str, c);
	printf("The initial string is: %s\n", str);
	printf("The number of words is : %zu\n", ft_countwords(str, c));
	printf("The delimiter character is: %c\n", c);
	printf("Result (new line delimited):\n");
	while (i < word_count)
	{
		printf("%s\n", ft_split(str, c)[i]);
		i++;
		free(ft_split(str, c));
	}
	return (0);
}
*/
