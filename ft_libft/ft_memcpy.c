/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:20:24 by krengar           #+#    #+#             */
/*   Updated: 2020/10/29 19:42:33 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	size_t	cnt;

	if (!to && !from)
		return (NULL);
	cnt = 0;
	while (cnt < size)
	{
		((char *)to)[cnt] = ((char *)from)[cnt];
		++cnt;
	}
	return (to);
}
