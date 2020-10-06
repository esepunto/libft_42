/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:37:27 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/07 13:23:43 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t how_many)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	if (how_many == 0 || destination == source)
		return (destination);
	while (how_many)
	{
		*(d++) = *(s++);
		how_many--;
	}
	return (destination);
}
