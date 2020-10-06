/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 03:40:26 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/23 12:16:43 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *copy;

	if (*lst)
	{
		copy = *lst;
		while (copy->next)
			copy = copy->next;
		copy->next = new;
	}
	else
		*lst = new;
}
