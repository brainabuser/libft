/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 06:26:25 by krengar           #+#    #+#             */
/*   Updated: 2020/11/05 10:08:40 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		cnt;
	int		i;
	char	*result;

	if (!s1)
		return (NULL);
	else if (!set)
		return ((char *)s1);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	cnt = ft_strlen(s1);
	while (s1[cnt] != *s1 && ft_strchr(set, s1[cnt]))
		--cnt;
	result = ft_calloc(++cnt + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	i = -1;
	while (++i < cnt)
		result[i] = s1[i];
	result[i] = '\0';
	return (result);
}
