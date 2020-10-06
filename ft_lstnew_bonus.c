/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 02:24:23 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/23 12:57:33 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(1 * sizeof(t_list *));
	if (!list)
		return (NULL);
	if (!content)
		list->content = NULL;
	else
		list->content = (void *)content;
	list->next = NULL;
	return (list);
}
