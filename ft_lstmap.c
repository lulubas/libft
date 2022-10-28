/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:23:43 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/28 17:03:55 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*cont;
	t_list	*scan;
	t_list	*n_node;
	t_list	*n_lst;

	if (!f || !del || !lst)
		return (0);
	cont = f(lst->content);
	n_lst = ft_lstnew(cont);
	scan = lst->next;
	while (scan)
	{
		cont = f(scan->content);
		n_node = ft_lstnew(cont);
		if (!n_node)
		{
			ft_lstclear(&n_lst, del);
			return (0);
		}
		ft_lstadd_back(&n_lst, n_node);
		scan = scan->next;
	}
	return (n_lst);
}
