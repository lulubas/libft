/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:49 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/13 18:22:44 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<string.h>
#include<stdio.h>

int	ft_countwords(const	char *s, char c)
{
	int		i;
	int 	count;
	int		len;
	int		check_i;

	len = strlen((char *)s);	
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
/*
char *create_buffer(char const *s, char c)
{
	int	i;
	char *buffer;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (strchr(s, c))
			i++;
		while (strchr(s, c) == NULL)
		{
			buffer[j] = s[i];
			j++;
			i++;
		}
	}
	return (count)
}

char **ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;
	int		buffer_size
	int		i;
	
	i = 0;
	word_count = ft_countwords(s, c);
	array = (char **)malloc(sizeof(char *) * word_count);
	array[i] = (char *)malloc(buffer_size[i]);
}
*/

// Main
#include<stdio.h>
int	main(void)
{
	const char	str[100] = "ifd";
	char	c;
	int		i;

	i = 0;;	
	c = ';';
	printf("The initial string is: %s\n", str);
	printf("The delimiter character is: %c\n", c);
	printf("word count is : \n%d\n", ft_countwords(str, c));
	return (0);
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
