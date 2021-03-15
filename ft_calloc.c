/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 04:35:06 by krengar           #+#    #+#             */
/*   Updated: 2020/11/05 07:58:54 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t eltsize)
{
	size_t	size;
	void	*value;

	size = count * eltsize;
	value = malloc(size);
	if (!value)
		return (NULL);
	ft_memset(value, 0, size);
	return (value);
}
