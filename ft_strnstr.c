/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:53:51 by ssacrist          #+#    #+#             */
/*   Updated: 2020/01/09 20:30:14 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	if (*needle == '\0')
		return ((char*)haystack);
	h = 0;
	while (haystack[h])
	{
		n = 0;
		while (needle[n] == haystack[h + n] && (h + n) < len && needle[n])
		{
			if (needle[n + 1] == '\0')
				return ((char*)&haystack[h]);
			n++;
		}
		h++;
	}
	return (NULL);
}
