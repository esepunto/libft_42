/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 06:37:28 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/23 12:28:54 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *copy;

	if (lst || del)
	{
		while (*lst)
		{
			copy = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = copy;
		}
		*lst = NULL;
	}
}
