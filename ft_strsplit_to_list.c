/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_to_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:16:19 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 17:39:03 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*overlook_sprtr(char *str, char c)
{
	if (str == NULL)
		return (NULL);
	while (*str == c && *str != '\0')
		str++;
	return (str);
}

t_list		*ft_strsplit_to_list(char const *s, char c)
{
	t_list	*ptr_list;
	t_list	*element;
	size_t	words;
	size_t	word_len;
	char	*ptr_s;

	ptr_s = overlook_sprtr((char*)s, (unsigned char)c);
	words = ft_count_words(ptr_s, (unsigned char)c);
	word_len = ft_strnlen(ptr_s, (unsigned char)c);
	if (words == 0 || !s || *ptr_s == '\0')
		return (ft_lstnew(NULL, 0));
	element = ft_strlist(ptr_s, word_len);
	ptr_list = element;
	while (--words > 0)
	{
		ptr_s += word_len + 1;
		ptr_s = overlook_sprtr(ptr_s, (unsigned char)c);
		if (!ptr_s && ptr_s == '\0')
			break ;
		word_len = ft_strnlen(ptr_s, (unsigned char)c);
		element->next = ft_strlist(ptr_s, word_len);
		element = element->next;
	}
	return (ptr_list);
}
