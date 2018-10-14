/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:37:32 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 10:30:58 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr_memory;

	if (size == 0)
		return (NULL);
	ptr_memory = (void *)malloc(size * sizeof(void *));
	if (!ptr_memory)
		return (NULL);
	ft_bzero(ptr_memory, size);
	return (ptr_memory);
}
