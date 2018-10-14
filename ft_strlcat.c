/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:53:19 by lmatvien          #+#    #+#             */
/*   Updated: 2018/03/28 15:51:23 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		dst_c;
	size_t		siz_c;

	ptr_dst = dst;
	ptr_src = src;
	siz_c = siz;
	while (siz_c-- != 0 && *ptr_dst != '\0')
		ptr_dst++;
	dst_c = ptr_dst - dst;
	siz_c = siz - dst_c;
	if (siz_c == 0 || *ptr_src == '\0')
		return (dst_c + ft_strlen(ptr_src));
	while (*ptr_src != '\0')
	{
		if (siz_c != 1)
		{
			*ptr_dst++ = *ptr_src;
			siz_c--;
		}
		++ptr_src;
	}
	*ptr_dst = '\0';
	return (dst_c + (ptr_src - src));
}
