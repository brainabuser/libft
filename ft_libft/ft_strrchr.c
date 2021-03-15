/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 00:04:03 by krengar           #+#    #+#             */
/*   Updated: 2020/10/30 00:10:19 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t i;

	i = ft_strlen(string);
	while (i > 0)
	{
		if (string[i] == c)
			return ((char *)(string + i));
		--i;
	}
	return ((string[i] == c) ? (char *)(string + i) : NULL);
}
