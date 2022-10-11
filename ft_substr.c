/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:26:30 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 14:27:38 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (0);
	while (len-- && s[start - 1])
	{
		sub[i] = s[start - 1];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}
/* Main
#include <stdio.h>
int	main(void)
{
	const char	s[50] = "Hello my name is lulu";
	unsigned int	start;
	size_t	len;

	printf("The initial string is: %s\n", s);
	printf("Enter substring index start:");
	scanf("%d", &start);
	printf("Enter substring length:");
	scanf("%zu", &len);
	printf("\nResult : %s\n", ft_substr(s, start, len));

	free(ft_substr(s, start, len));
	return(0);
}
*/
