/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:08:59 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/02 15:43:46 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_num(unsigned int n)
{
	char	val;

	if (n / 10)
	{
		print_num(n / 10);
		val = (n % 10) + '0';
		write(1, &val, 1);
	}
	else
	{
		val = n + '0';
		write(1, &val, 1);
	}
}

void		ft_putnbr(int n)
{
	if (n >= 0)
		print_num(n);
	else
	{
		write(1, "-", 1);
		print_num(-n);
	}
}
