/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:57:08 by krengar           #+#    #+#             */
/*   Updated: 2020/11/10 09:24:05 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;
	t_list *temp;

	if (!lst || !f)
		return (NULL);
	if (!(temp = ft_lstnew(f(lst->content))))
	{
		ft_lstdelone(temp, del);
		return (NULL);
	}
	result = temp;
	lst = lst->next;
	while (lst)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
		{
			ft_lstdelone(temp, del);
			ft_lstclear(&result, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&result, temp);
	}
	return (result);
}
