/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:49:22 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/07 13:30:38 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str_1, const char *str_2, size_t n)
{
	size_t count;

	count = 0;
	while ((count < n) && (str_1[count] != '\0' || str_2[count] != '\0'))
	{
		if (str_1[count] != str_2[count])
			return ((unsigned char)str_1[count] - (unsigned char)str_2[count]);
		count++;
	}
	return (0);
}
