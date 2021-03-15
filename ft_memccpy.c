/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:50:26 by krengar           #+#    #+#             */
/*   Updated: 2020/10/29 21:13:25 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *to, const void *from, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		*(unsigned char *)(to + i) = *(unsigned char *)(from + i);
		if (*(unsigned char *)(from + i) == (unsigned char)c)
			return (to + i + 1);
		++i;
	}
	return (NULL);
}
