/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/25 22:20:26 by lbastien         ###   ########.fr       */
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
	k = i;
	while (s[k] != c && s[k])
	{
		j++;
		k++;
	}
	word = (char *)malloc(sizeof(char) * j + 1);
	j = 0;
	while (s[i] != c && s[i])
		word[j++] = s[i++];
	word[j] = 0;
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
	array = (char **)malloc(sizeof(char *) * word_count + 1);
	if (!array)
		return (0);
	while (word_index < word_count && word_count != 0)
	{
		while (s[i] == c && s[i])
			i++;
		array[word_index] = ft_create_word(s, i, c);
		i += ft_strlen(array[word_index]);
		word_index++;
	}
	array[word_index] = 0;
	return (array);
}
/* Main
#include<stdio.h>
int	main(void)
{
	size_t	i;
	size_t	word_count;
	char	**array;

	i = 0;
	word_count = ft_countwords("tripouille test", ' ');
	printf("The number of words is : %zu\n", ft_countwords("tripouille test", ' '));
	
	array = ft_split ("tripouille test", ' ');
	while (i < word_count)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}
*/
//	printf("word count %zu\n", word_count);
//	printf("word index %zu\n", word_index);
