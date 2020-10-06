/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 12:39:50 by ssacrist          #+#    #+#             */
/*   Updated: 2019/12/23 10:05:44 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str_tosearch, int char_tofind, size_t how_many)
{
	unsigned char	*str;
	size_t			counter;

	str = (unsigned char *)str_tosearch;
	counter = 0;
	while (counter < how_many)
	{
		if (*(str + counter) == (unsigned char)char_tofind)
			return (str + counter);
		else
			++counter;
	}
	return (NULL);
}
