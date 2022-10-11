/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:07:04 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:36:42 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t n)
{
	const char	*hay_tmp;
	const char	*nee_tmp;
	size_t		m;

	m = n;
	nee_tmp = nee;
	hay_tmp = hay;
	if (*nee == 0)
		return ((char *)hay);
	while (*hay && n > 1)
	{
		hay_tmp = hay;
		nee_tmp = nee;
		while (*hay_tmp == *nee_tmp)
		{
			hay_tmp++;
			nee_tmp++;
		}
		if (*nee_tmp == 0)
			return ((char *)hay);
		hay++;
		n--;
	}
	return (0);
}
/* Main
#include <stdio.h>
int	main(void)
{
	char	haystack[50] = "hello my name is lulu";
	char	needle[50];
	size_t	n;

	printf("Haystack is = %s\n", haystack);
	printf("Enter needle :");
	scanf("%s", needle);
	printf("Enter n :");
	scanf("%zu", &n);
	printf("\nHaystack is = %s\n", haystack);
	printf("Needle = %s\n", needle);
	printf("Returned Value = %s\n", ft_strnstr(haystack, needle, n));
	printf("Expected Value = %s\n", strnstr(haystack, needle, n));

	if (ft_strnstr(haystack, needle, n) == strnstr(haystack, needle, n))
		printf("\nSuccess !! Well done !!\n");
	return(0);
}
*/
