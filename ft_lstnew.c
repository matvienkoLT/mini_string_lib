/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 12:02:06 by lmatvien          #+#    #+#             */
/*   Updated: 2018/03/31 14:58:08 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr_s;

	ptr_s = (t_list*)malloc(sizeof(t_list));
	if (!ptr_s)
		return (NULL);
	ptr_s->content = malloc(content_size);
	if (!ptr_s->content || content == NULL)
	{
		free(ptr_s->content);
		ptr_s->content = NULL;
		ptr_s->content_size = 0;
	}
	else
	{
		ft_memcpy(ptr_s->content, content, content_size);
		ptr_s->content_size = content_size;
	}
	ptr_s->next = NULL;
	return (ptr_s);
}
