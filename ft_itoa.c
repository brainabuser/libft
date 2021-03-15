/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladimir <vladimir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:27:48 by krengar           #+#    #+#             */
/*   Updated: 2020/11/10 03:19:21 by vladimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned	num;
	int			is_neg;
	int			size;
	char		*result;
	char		char_num[12];

	is_neg = (n < 0);
	num = (unsigned)n * ((is_neg) ? -1 : 1);
	size = 0;
	char_num[size++] = num % 10 + '0';
	while (num /= 10)
		char_num[size++] = num % 10 + '0';
	char_num[size] = ((is_neg) ? '-' : '\0');
	if (!(result = (char *)ft_calloc(size + is_neg + 1, sizeof(char))))
		return (NULL);
	n = 0;
	while (n < size + is_neg)
	{
		result[n] = char_num[size + is_neg - 1 - n];
		++n;
	}
	result[size + is_neg] = '\0';
	return (result);
}
