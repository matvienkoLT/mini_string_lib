/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:47:51 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/02 16:19:07 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr_s;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ptr_s = ft_strnew(ft_strlen(s));
	if (!ptr_s)
		return (NULL);
	while (*s != '\0')
	{
		ptr_s[i] = f(i, *s);
		s++;
		i++;
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
