/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 17:14:26 by ssacrist          #+#    #+#             */
/*   Updated: 2019/12/19 17:12:24 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		ds[i] = sr[i];
		if (sr[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
	}
	return (NULL);
}
