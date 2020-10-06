/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 21:07:12 by ssacrist          #+#    #+#             */
/*   Updated: 2019/12/30 18:45:27 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int long num;
	int long neg;

	num = 0;
	neg = 1;
	while (*str && (*str == '\n' || *str == '\t' || *str == '\r' ||
		*str == '\v' || *str == '\f' || *str == '\b' ||
		*str == '\r' || *str == '\\' || *str == ' '))
		++str;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		++str;
		if (num > 2147483648 && neg == -1)
			return (0);
		if (num > 2147483648 && neg == 1)
			return (-1);
	}
	return (num * neg);
}
