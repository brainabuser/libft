/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 06:00:47 by krengar           #+#    #+#             */
/*   Updated: 2020/11/03 06:30:37 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	int			is_neg;
	static int	cnt;

	if (n == MIN_INT)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	is_neg = (n < 0);
	n = (is_neg) ? -n : n;
	if (n)
	{
		c = n % 10 + '0';
		if (is_neg)
		{
			ft_putchar_fd('-', fd);
			is_neg = 0;
		}
		++cnt;
		ft_putnbr_fd(n /= 10, fd);
		ft_putchar_fd(c, fd);
	}
	else if (cnt == 0)
		ft_putchar_fd('0', fd);
}
