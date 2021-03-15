/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 06:34:37 by krengar           #+#    #+#             */
/*   Updated: 2020/11/09 22:59:26 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		size;
	char		*result;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	size = 0;
	result = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[i])
		result[size++] = s1[i++];
	i = 0;
	while (s2[i])
		result[size++] = s2[i++];
	result[size] = '\0';
	return (result);
}
