/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 02:51:51 by krengar           #+#    #+#             */
/*   Updated: 2020/11/14 18:13:50 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	pos;
	size_t	i;

	if (!*little)
		return ((char*)big);
	pos = 0;
	while (big[pos] != '\0' && pos < len)
	{
		if (big[pos] == little[0])
		{
			i = 1;
			while (little[i] != '\0' && big[pos + i] == little[i]
			&& (pos + i) < len)
				++i;
			if (little[i] == '\0')
				return ((char*)&big[pos]);
		}
		++pos;
	}
	return (NULL);
}
