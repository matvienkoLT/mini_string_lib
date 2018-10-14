/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:37:23 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 17:35:32 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *str, char c)
{
	size_t	qntt;
	size_t	itr;

	if (str == NULL)
		return (0);
	qntt = 0;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] != c)
		{
			qntt++;
			while (str[itr] != c && str[itr] != '\0')
				itr++;
		}
		else
			itr++;
	}
	return (qntt);
}
