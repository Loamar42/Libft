/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:44:10 by loamar            #+#    #+#             */
/*   Updated: 2019/10/21 17:19:55 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isneg(long int tmp)
{
	if (tmp < 0)
		return (1);
	return (0);
}

int				ft_value(long int tmp)
{
	long int	begin_value;
	long int	value;

	value = 0;
	begin_value = tmp;
	while (begin_value > 0)
	{
		begin_value /= 10;
		value++;
	}
	return (value);
}

void			ft_changevalue(long int *len, long int *neg, long int *tmp)
{
	if (ft_isneg(*tmp) == 1)
	{
		*neg = -1;
		*tmp = -*tmp;
		*len = *len + 1;
	}
}

char			*ft_itoa(int n)
{
	char		*stock;
	long int	len;
	long int	neg;
	long int	tmp;

	tmp = n;
	len = 1;
	if (tmp == 0)
		len = 2;
	ft_changevalue(&len, &neg, &tmp);
	len += ft_value(tmp);
	if (!(stock = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	stock[--len] = '\0';
	while (len--)
	{
		stock[len] = tmp % 10 + 48;
		tmp = tmp / 10;
	}
	if (neg == -1)
		stock[0] = '-';
	return (stock);
}
