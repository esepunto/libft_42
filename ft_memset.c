/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:58:09 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/07 13:16:43 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *original_string, int fill_with, size_t how_many)
{
	size_t			position;
	unsigned char	unsigned_fill_with;
	char			*final_string;

	unsigned_fill_with = (unsigned char)fill_with;
	final_string = (char*)original_string;
	position = 0;
	while (position < how_many)
	{
		final_string[position] = unsigned_fill_with;
		position++;
	}
	return (final_string);
}
