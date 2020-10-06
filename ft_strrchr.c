/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:59:51 by ssacrist          #+#    #+#             */
/*   Updated: 2019/12/18 15:14:21 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string_to_search, int character_to_find)
{
	int counter;

	counter = 0;
	while (string_to_search[counter] != '\0')
		counter++;
	while (counter >= 0)
	{
		if (*(string_to_search + counter) == character_to_find)
			return (char*)string_to_search + counter;
		counter--;
	}
	if (character_to_find == '\0')
		return ((char*)string_to_search);
	return (0);
}
