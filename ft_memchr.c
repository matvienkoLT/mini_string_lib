/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:37:21 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/01 15:55:12 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_des;

	ptr_des = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr_des == (unsigned char)c)
			return (ptr_des);
		else
			ptr_des++;
		n--;
	}
	return (NULL);
}
