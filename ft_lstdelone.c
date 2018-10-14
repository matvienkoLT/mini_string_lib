/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 11:39:40 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 10:24:43 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr_alst;

	ptr_alst = *alst;
	if (alst != NULL && del != NULL)
	{
		if (ptr_alst != NULL)
		{
			del(ptr_alst->content, ptr_alst->content_size);
			free(ptr_alst);
			*alst = NULL;
		}
	}
}
