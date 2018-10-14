/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:59:32 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/05 12:09:40 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		size;
	const char	*ptr_s;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		++s;
	if (*s == '\0')
		return (ft_strnew(0));
	size = ft_strlen(s);
	ptr_s = s + size;
	while ((*(--ptr_s) >= 9 && *ptr_s <= 13) || *ptr_s == 32)
		size--;
	ptr_s = ft_strnew(size);
	if (!ptr_s)
		return (NULL);
	ft_strncpy((char *)ptr_s, (char *)s, size);
	return ((char *)ptr_s);
}
