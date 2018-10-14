/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:39:23 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 17:19:07 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr_str;

	if (!(ptr_str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	return (ft_memset(ptr_str, '\0', size + 1));
}
