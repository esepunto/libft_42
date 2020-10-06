/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:44:23 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/07 13:22:31 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *original_string, size_t how_many)
{
	size_t	position;
	char	*final_string;

	final_string = (char*)original_string;
	position = 0;
	while (position != how_many)
	{
		final_string[position] = '\0';
		position++;
	}
}
