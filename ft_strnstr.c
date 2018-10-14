/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:04:08 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/05 13:07:02 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strnchr(const char *haystack, const char *ch, size_t len)
{
	while (*haystack != '\0' && len != 0)
	{
		if (*haystack == (unsigned char)*ch)
			return ((char *)haystack);
		else
			haystack++;
		len--;
	}
	return (NULL);
}

char			*ft_strnstr(const char *haystack, const char *need, size_t len)
{
	const char			*result;
	const char			*ptr_hay;
	const char			*ptr_need;

	if (*need == '\0')
		return ((char *)haystack);
	if (!(result = ft_strnchr(haystack, need, len)))
		return (NULL);
	ptr_need = need;
	ptr_hay = result;
	while (*ptr_need != '\0')
	{
		if ((size_t)(ptr_hay - haystack) >= len)
			return (NULL);
		if (*ptr_need != *ptr_hay)
		{
			ptr_need = need;
			ptr_hay = ft_strnchr(++result, need, len - (ptr_hay - haystack));
			result = ptr_hay;
		}
		ptr_need++;
		ptr_hay++;
	}
	return ((char *)result);
}
