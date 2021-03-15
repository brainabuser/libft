/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:49:22 by krengar           #+#    #+#             */
/*   Updated: 2020/11/03 05:22:24 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *string)
{
	long long	res;
	int			is_neg;

	while (*string == ' ' || (*string >= '\t' && *string <= '\r'))
		++string;
	is_neg = 0;
	if (*string == '-' || *string == '+')
	{
		is_neg = (*string == '-');
		++string;
	}
	while (*string == '0')
		++string;
	res = 0;
	while (res <= MAX_INT && *string >= '0' && *string <= '9')
	{
		res = res * 10 + *string - '0';
		++string;
	}
	if (is_neg)
		return ((-res < MIN_INT) ? 0 : -res);
	return ((res > MAX_INT) ? -1 : res);
}
