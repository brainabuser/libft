/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:47:34 by krengar           #+#    #+#             */
/*   Updated: 2020/11/13 23:01:26 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
		if (((unsigned char *)block)[i++] == (unsigned char)c)
			return ((unsigned char *)block + i - 1);
	return (NULL);
}
