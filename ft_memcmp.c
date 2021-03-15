/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:23:37 by krengar           #+#    #+#             */
/*   Updated: 2020/10/29 23:38:36 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	const unsigned char *cp1;
	const unsigned char *cp2;

	cp1 = (const unsigned char*)a1;
	cp2 = (const unsigned char*)a2;
	while (size--)
	{
		if (*cp1 != *cp2)
			return (*cp1 - *cp2);
		++cp1;
		++cp2;
	}
	return (0);
}
