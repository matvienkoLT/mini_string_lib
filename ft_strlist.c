/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:11:33 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 17:40:03 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_strlist(char *ptr_s, size_t word_len)
{
	char	*new_str;
	t_list	*element;

	new_str = ft_strnew(word_len);
	ft_memcpy(new_str, ptr_s, word_len);
	element = ft_lstnew(new_str, word_len + 1);
	free(new_str);
	return (element);
}
