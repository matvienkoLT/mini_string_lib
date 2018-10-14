/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:51:30 by lmatvien          #+#    #+#             */
/*   Updated: 2018/03/28 14:08:48 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	const unsigned char	*ptr_str1;
	const unsigned char	*ptr_str2;

	ptr_str1 = (unsigned char *)str1;
	ptr_str2 = (unsigned char *)str2;
	while (num--)
	{
		if (*ptr_str1 != *ptr_str2)
			return (*ptr_str1 - *ptr_str2);
		else
		{
			ptr_str1++;
			ptr_str2++;
		}
	}
	return (0);
}
