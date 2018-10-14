/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:38:25 by lmatvien          #+#    #+#             */
/*   Updated: 2018/03/28 13:57:08 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_dest = (char*)dest;
	ptr_src = (char*)src;
	if (dest < src)
	{
		while (num-- > 0)
			*(ptr_dest++) = *(ptr_src++);
	}
	else
	{
		ptr_dest += num;
		ptr_src += num;
		while (num-- > 0)
			*(--ptr_dest) = *(--ptr_src);
	}
	return (dest);
}
