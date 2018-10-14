/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:46:53 by lmatvien          #+#    #+#             */
/*   Updated: 2018/03/30 17:26:06 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr_s;
	char	*str;

	if (!s)
		return (NULL);
	ptr_s = ft_strnew(ft_strlen(s));
	if (!ptr_s)
		return (NULL);
	str = ptr_s;
	while (*s != '\0')
		*(str++) = f(*s++);
	*str = '\0';
	return (ptr_s);
}
