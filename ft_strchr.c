/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:42:23 by ssacrist          #+#    #+#             */
/*   Updated: 2019/12/18 14:44:24 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string_to_search, int character_to_find)
{
	while (*string_to_search)
	{
		if (*string_to_search == character_to_find)
			return ((char*)string_to_search);
		string_to_search++;
	}
	if (character_to_find == '\0')
		return ((char*)string_to_search);
	return (0);
}
