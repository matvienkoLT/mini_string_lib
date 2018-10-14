/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:03:20 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 17:40:26 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(char const *str, char c)
{
	size_t	qntt;

	if (str == NULL)
		return (0);
	qntt = 0;
	while (*str != c && *str++ != '\0')
		qntt++;
	return (qntt);
}
