/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:57:46 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/05 11:50:44 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr_s;

	if (s == NULL)
		return (NULL);
	ptr_s = ft_strnew(len);
	if (ptr_s)
		ft_strncpy(ptr_s, (char *)s + start, len);
	else
		return (NULL);
	return (ptr_s);
}
