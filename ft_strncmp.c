/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:30:40 by krengar           #+#    #+#             */
/*   Updated: 2020/11/03 05:25:03 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	const unsigned char *cp1;
	const unsigned char *cp2;

	if (size == 0)
		return (0);
	cp1 = (const unsigned char*)s1;
	cp2 = (const unsigned char*)s2;
	while (*cp1 == *cp2 && *cp1 && *cp2 && --size)
	{
		++cp1;
		++cp2;
	}
	return (*cp1 - *cp2);
}
