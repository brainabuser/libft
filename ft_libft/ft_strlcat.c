/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:03:25 by krengar           #+#    #+#             */
/*   Updated: 2020/11/03 02:42:50 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t dst_len;
	size_t n_remained;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	dst_len = (dst_len > size) ? size : dst_len;
	n_remained = size - dst_len - 1;
	if (size <= dst_len)
	{
		return (src_len + size);
	}
	if (src_len <= n_remained)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, n_remained);
		dst[size - 1] = '\0';
	}
	return (src_len + dst_len);
}
