/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:46:48 by lbastien          #+#    #+#             */
/*   Updated: 2022/09/19 13:36:19 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

void*	ft_calloc(size_t n, size_t s);
void	ft_bzero(void *str, size_t n);

int	main(void)
{
	size_t	n;
	size_t	s;
	int *ptr;
	int *ptr_t;
	size_t i;

	s = 4;
	printf("This test is made with integers (4 bytes\n");
	printf("Enter the number of elements (n): ");
	scanf("%zu", &n);

	ptr = (int*)calloc(n, s);
	if(ptr != NULL)
		printf("Calloc memory allocated\n");
	printf("Expected elements assigned to array =");
	for(i = 0; i < n; i++){
		ptr[i] = 2 * i + 1;
		printf("%d ", ptr[i]);
	}
	ptr_t = (int*)ft_calloc(n, s);
	if(ptr_t != NULL)
	   	printf("\nFt_calloc memory allocated\n");
		printf("Returned elements assigned to array =");
	for(i = 0; i < n; i++){
		ptr_t[i] = 2 * i + 1;
		printf("%d ", ptr_t[i]);
	}
	printf("\n");
	return(0);
}
*/
void	*ft_calloc(size_t n, size_t s)
{
	void	*ctr;

	ctr = (void *)malloc(n * s);
	if (ctr == NULL)
		return (NULL);
	ft_bzero(ctr, n * s);
	return ((void *)ctr);
}

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ctr;

	ctr = (unsigned char *)str;
	while (n > 0)
	{
		*ctr = 0;
		ctr++;
		n--;
	}
}
