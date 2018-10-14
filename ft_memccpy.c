/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:36:44 by lmatvien          #+#    #+#             */
/*   Updated: 2018/03/28 13:55:25 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*dest;
	const char		*src;
	unsigned char	cc;

	dest = (unsigned char *)str1;
	src = (char *)str2;
	cc = (unsigned char)c;
	while (n-- > 0)
	{
		*dest = *src;
		if (*dest == cc)
			return (dest + 1);
		dest++;
		src++;
	}
	return (NULL);
}
