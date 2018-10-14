/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatvien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:28:39 by lmatvien          #+#    #+#             */
/*   Updated: 2018/04/04 17:59:43 by lmatvien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_solving(int nb)
{
	double	res;
	double	high;
	double	low;
	double	sqrt;

	if (2 > nb)
		return (nb);
	low = 0;
	high = nb;
	while (high > low + 1)
	{
		sqrt = (high + low) / 2;
		res = sqrt * sqrt;
		if (nb < res)
			high = sqrt;
		else if (nb > res)
			low = sqrt;
		else
			break ;
	}
	if (nb == res)
		return (sqrt);
	else
		return (low + 1);
}

int			ft_sqrt(int nb)
{
	int sqrt;
	int high;
	int low;

	low = 0;
	high = nb;
	sqrt = ft_solving(nb);
	if (sqrt * sqrt != nb)
		return (0);
	else
		return (sqrt);
}
