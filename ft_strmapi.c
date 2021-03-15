/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladimir <vladimir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:11:25 by krengar           #+#    #+#             */
/*   Updated: 2020/11/10 03:08:19 by vladimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	result = ft_strdup((char *)s);
	if (result == NULL)
		return (NULL);
	i = -1;
	while (result[++i])
		result[i] = f(i, result[i]);
	return (result);
}
