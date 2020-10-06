/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 19:02:26 by ssacrist          #+#    #+#             */
/*   Updated: 2019/12/23 10:04:40 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *tab;

	tab = malloc(count * size);
	if (tab == NULL)
		return (0);
	else
	{
		ft_bzero(tab, count * size);
		return (tab);
	}
}
