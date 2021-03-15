/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:45:02 by krengar           #+#    #+#             */
/*   Updated: 2020/11/03 05:07:11 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		strlen;
	int		i;

	strlen = ft_strlen(src);
	dest = (char *)malloc(++strlen * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < strlen - 1)
		dest[i++] = *(src++);
	dest[strlen - 1] = '\0';
	return (dest);
}
