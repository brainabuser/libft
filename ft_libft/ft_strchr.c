/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:50:13 by krengar           #+#    #+#             */
/*   Updated: 2020/10/30 00:02:23 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	size_t i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)c)
			return ((char *)(string + i));
		++i;
	}
	return ((string[i] == (char)c) ? (char *)(string + i) : NULL);
}
