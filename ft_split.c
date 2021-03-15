/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 21:57:42 by krengar           #+#    #+#             */
/*   Updated: 2020/11/15 14:35:31 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_size(char const *s, char c)
{
	size_t	size;
	char	*find;

	find = ft_strchr(s, c);
	size = (*s && *s != c) ? 1 : 0;
	while (find != NULL)
	{
		while (*find == c)
			++find;
		if (*find)
			++size;
		else
			break ;
		find = ft_strchr(find, c);
	}
	return (size);
}

static void		*ft_clear(char **s, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
		free(s[i++]);
	free(s);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	char	*find;
	size_t	size;
	size_t	len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	size = ((c == '\0') ? 1 : ft_get_size(s, c));
	if (!(result = (char **)malloc((size + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		find = ft_strchr(s, c);
		len = (find == NULL) ? ft_strlen((const char *)s) : (size_t)(find - s);
		if (len > 0)
			if (!(result[i++] = ft_substr(s, 0, len)))
				return (ft_clear(result, size + 1));
		while (find != NULL && *find == c)
			++find;
		s = find;
	}
	result[size] = NULL;
	return (result);
}
