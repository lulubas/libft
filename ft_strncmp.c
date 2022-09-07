/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:00:47 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/07 20:34:53 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	src[50] = "coucou je mappelle louis mon ami";
	char	dst[50] = "coucou";

	char	src_t[50] = "coucou je mappelle louis mon ami";
	char	dst_t[50] = "coucou";
	size_t	n;
	int r;
	int	r_t;

	printf("Enter n :");
	scanf("%zu", &n);
	printf("Source = %s\n", src);
	printf("Destination = %s\n", dst);
	r = ft_strncmp(dst, src, n);
	r_t = strncmp(dst_t, src_t, n);
	printf("Return Value = %d\n", r);
	printf("Expected Value = %d\n", r_t);
	return(0);
}
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return((int)*s1-(int)*s2);	
}

