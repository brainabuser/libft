/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:47:08 by krengar           #+#    #+#             */
/*   Updated: 2020/10/29 22:31:48 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	size_t			i;

	if (!to && !from)
		return (NULL);
	if (to > from)
		while (size--)
			((unsigned char *)to)[size] = ((unsigned char *)from)[size];
	else
	{
		i = 0;
		while (i < size)
		{
			((unsigned char *)to)[i] = ((unsigned char *)from)[i];
			++i;
		}
	}
	return (to);
}
