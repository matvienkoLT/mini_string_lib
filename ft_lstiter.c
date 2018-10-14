/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:36:23 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 10:16:55 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*ptr_lst;

	if (lst != NULL && f != NULL)
	{
		ptr_lst = lst;
		while (ptr_lst)
		{
			f(ptr_lst);
			ptr_lst = ptr_lst->next;
		}
	}
}
