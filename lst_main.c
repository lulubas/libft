/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:15:24 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/28 16:58:05 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdio.h>

void	ft_print_lst(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while(tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
}

void	ft_putupper(void *str)
{
	char	*scan;
	char	c;
	int		i;

	i = 0;
	scan = (char *)str;
	while (scan[i])
	{	
		c = scan[i];
		if (scan[i] > 96 && scan[i] < 123)
			c -= 32;
			write(1, &c, 1);
		scan++;
	}
}

void	*ft_strtoupper(void *content)
{
	char	*scan;
	char	*str;
	char	c;
	int		i;

	i = 0;
	scan = (char *)content;
	str = (char *)malloc((ft_strlen(scan) + 1) * sizeof(char));
	while (scan[i])
	{	
		c = scan[i];
		if (c > 96 && c < 123)
			c -= 32;
		str[i] = c;
		i++;
	}
	return ((void *)str);
}

void	ft_delete(void *content)
{
	char	*str;
	int		n;

	str = (char *)content;
	n = ft_strlen(str);
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}
int	main(void)
{
	t_list	*list;
	t_list	*nlst;
	list = ft_lstnew("Final");
	if (list)
		printf("\nList initialised successfully !\n");
	ft_lstadd_front(&list, ft_lstnew("First"));
	printf("\nElements of the list are :\n");
	ft_print_lst(list);
	printf("\nNumber of elements: %d\n", ft_lstsize(list));
	printf("\nLast element is: %s\n", ft_lstlast(list)->content);
	printf("\nAdding 'new final' to the end of list :\n");
	ft_lstadd_back(&list, ft_lstnew("New Final"));
	ft_print_lst(list);
	printf("\nApplying putupper fct to the current list:\n");
	ft_lstiter(list, ft_putupper);
	printf("\n\nChecking state of the list:\n");
	ft_print_lst(list);
	printf("\nApplying the strtoupper fct and creating new list:\n");
	nlst = ft_lstmap(list, ft_strtoupper, ft_delete);
	ft_print_lst(nlst);
}

