/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 00:32:23 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/09 21:22:34 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	final_len;
	size_t	counter;

	if (!s || start < 0)
		return (NULL);
	if ((ft_strlen(s) + 1 - start) < len)
		final_len = (ft_strlen(s) + 1 - start);
	else
		final_len = len;
	new = malloc(sizeof(char) * (final_len + 1));
	if (!new)
		return (NULL);
	counter = 0;
	while (final_len > 0 && s[start + counter] && ft_strlen(s) > start)
	{
		new[counter] = s[start + counter];
		counter++;
		final_len--;
	}
	new[counter] = '\0';
	return (new);
}
